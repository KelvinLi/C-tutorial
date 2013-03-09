/* Reads standard input, parsing input as whitespace-separated doubles.
 * Stores doubles in a very inappropriate data structure.
 * Draws horizontal point plot.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <obstack.h>
#include <math.h>

#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free

#define COLUMNS 60

struct plot_data {
    struct plot_data *next;
    double value;
};

void *
xmalloc (size_t size)
{
    void *ret;
    ret = malloc (size);
    if (ret)
        return ret;
    fprintf (stderr, "cannot allocate memory\n");
    exit (2);
}

char *
read_all_stdin (void)
{
    struct obstack buffer;
    int c;
    int ret_size;
    char *ret;
    obstack_init (&buffer);
    flockfile (stdin);
    while (1) {
        c = getchar_unlocked ();
        if (c == EOF)
            break;
        obstack_1grow (&buffer, c);
    }
    funlockfile (stdin);
    obstack_1grow (&buffer, '\0');
    ret_size = obstack_object_size (&buffer);
    ret = memcpy (xmalloc (ret_size),
                  obstack_finish (&buffer),
                  ret_size);
    obstack_free (&buffer, NULL);
    return ret;
}

struct plot_data *
plot_data_create (double value)
{
    struct plot_data *data;
    data = xmalloc (sizeof (*data));
    data->next = NULL;
    data->value = value;
    return data;
}

void
plot_data_destroy (struct plot_data *head)
{
    struct plot_data *next;
    while (head) {
        next = head->next;
        free (head);
        head = next;
    }
}

int
plot_data_parse_append (struct plot_data *data_tail, char *string)
{
    char *string_tail;
    double value;
    while (1) {
        while (isspace (*string))
            string++;
        if (*string == '\0')
            break;
        errno = 0;
        value = strtod (string, &string_tail);
        if (errno || string == string_tail)
            return -1;
        string = string_tail;
        data_tail->next = plot_data_create (value);
        data_tail = data_tail->next;
    }
    return 0;
}

struct plot_data *
plot_data_parse_stdin (void)
{
    char *buffer;
    struct plot_data fake_head;
    buffer = read_all_stdin ();
    fake_head.next = NULL;
    if (plot_data_parse_append (&fake_head, buffer) < 0) {
        plot_data_destroy (fake_head.next);
        return NULL;
    }
    free (buffer);
    buffer = NULL;
    return fake_head.next;
}

int
plot_data_draw (struct plot_data *data)
{
    struct plot_data *tmp;
    double max_value = 0.0;
    long int i;
    char c;

    for (tmp = data; tmp; tmp = tmp->next) {
        max_value = fmax (fabs (tmp->value), max_value);
    }
    for (tmp = data; tmp; tmp = tmp->next) {
        i = lrint (tmp->value / max_value * COLUMNS);
        c = i >= 0 ? '+' : '-';
        i = labs (i);
        flockfile (stdout);
        for (; i; i--) {
            if (putchar_unlocked (c) == EOF)
                return -1;
        }
        putchar_unlocked ('\n');
        funlockfile (stdout);
    }
    return 0;
}

int
main (int argc, char **argv)
{
    struct plot_data *data;
    data = plot_data_parse_stdin ();
    if (!data) {
        fprintf (stderr, "failed to read data.\n");
        return 1;
    }
    if (plot_data_draw (data) < 0)
        fprintf (stderr, "failed to print plot.\n");
    plot_data_destroy (data);
    data = NULL;
    return 0;
}
