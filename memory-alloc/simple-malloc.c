#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define LOOP_COUNT 6

void
print_help (const char *name)
{
    printf ("Usage: %s <number>...\n", name);
}

void
print_array (long int *nums, int size)
{
    int i;
    printf ("[");
    for (i = 0; i < size - 1; i++)
        printf ("%ld, ", nums[i]);
    printf ("%ld]\n", nums[i]);
}

void
get_differences (long int *out, long int *in, int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
        out[i] = in[i + 1] - in[i];
    out[i] = in[0] - in[i];
}

int
parse_strings(long int *out, char **strings, int size)
{
    char *tail;
    int i;
    for (i = 0; i < size; i++) {
        errno = 0;
        out[i] = strtol (strings[i], &tail, 10);
        if (errno || !tail || *tail != '\0')
            return -1;
    }
    return 0;
}

int
main (int argc, char **argv)
{
    long int *buffer1;
    long int *buffer2;
    int buffer_size;
    int ret;
    int i;

    if (argc <= 1) {
        print_help (argv[0]);
        return 1;
    }
    buffer_size = argc - 1;
    buffer1 = malloc(sizeof (buffer1) * buffer_size);
    buffer2 = malloc(sizeof (buffer2) * buffer_size);
    if (!buffer1 || !buffer2)
        goto fail;

    ret = parse_strings(buffer1, argv + 1, buffer_size);
    if (ret) {
        printf ("failed to parse numbers\n");
        print_help (argv[0]);
        goto fail;
    }
    for (i = 0; i < LOOP_COUNT; i++) {
        get_differences (buffer2, buffer1, buffer_size);
        print_array (buffer2, buffer_size);
        get_differences (buffer1, buffer2, buffer_size);
        print_array (buffer1, buffer_size);
    }
    free (buffer1);
    free (buffer2);
    return 0;

fail:
    if (buffer1)
        free (buffer1);
    if (buffer2)
        free (buffer2);
    return 1;
}
