/* Copies standard input in reverse to standard output */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <obstack.h>

#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free

void
die (const char *message)
{
    fprintf (stderr, "dying: %s\n", message);
    exit (2);
}

void *
xmalloc (size_t size)
{
    void *ret;
    ret = malloc (size);
    if (!ret)
        die ("cannot allocate memory");
    return ret;
}

void
dump_input (struct obstack *buffer, char **str, char **str_end)
{
    int c;
    int size;
    flockfile (stdin);
    while (1) {
        c = getchar_unlocked ();
        if (c == EOF)
            break;
        obstack_1grow (buffer, c);
    }
    funlockfile (stdin);
    obstack_1grow (buffer, '\0');
    size = obstack_object_size (buffer);
    *str = obstack_finish (buffer);
    *str_end = *str + size;
}

void
dump_output_reverse (char *str, char *str_end)
{
    int ret;
    char tmp;

    /* Push str behind first character.
     * Halt once str_end hits str.
     */
    str--;
    flockfile (stdout);
    for (str_end--; str_end != str; str_end--) {
        tmp = *str_end;
        ret = putchar_unlocked (tmp);
        if (ret == EOF)
            die ("could not write to standard output");
    }
    funlockfile (stdout);
}

int
main (int argc, char **argv)
{
    struct obstack buffer;
    char *str;
    char *str_end;
    obstack_init (&buffer);
    dump_input (&buffer, &str, &str_end);
    assert (obstack_object_size (&buffer) == 0);
    dump_output_reverse (str, str_end);
    obstack_free (&buffer, str);
    return 0;
}
