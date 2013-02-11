#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define LOOP_COUNT 5

void
print_help (const char *name)
{
    printf ("Usage: %s <number>...\n\n", name);
    printf ("Given a list of integers (a_1, a_2, ..., a_n),\n"
            "computes (a_2 - a_1, a_3 - a_2, ..., a_1 - a_n),\n"
            "then repeats again on the output list.\n\n");
    printf ("Example: %s 0 0 1 0 0\n"
            "0 1 -1 0 0\n", name);
}

void
print_buffer (long int *buffer, size_t size)
{
    size_t i;
    for (i = 0; i < size - 1; i++)
        printf ("%ld ", buffer[i]);
    printf ("%ld\n", buffer[i]);
}

void
put_differences (long int *out, long int *in, size_t size)
{
    size_t i;
    for (i = 0; i + 1 < size; i++)
        out[i] = in[i + 1] - in[i];
    out[i] = in[0] - in[i];
}

void
differences_loop (long int *primary, long int *secondary, size_t size)
{
    size_t i;
    for (i = 0; i < LOOP_COUNT / 2; i++) {
        put_differences (secondary, primary, size);
        print_buffer (secondary, size);
        put_differences (primary, secondary, size);
        print_buffer (primary, size);
    }
    if (LOOP_COUNT % 2 == 1) {
        put_differences (secondary, primary, size);
        print_buffer (secondary, size);
    }
}

int
parse_strings(long int *out, char **strings, size_t size)
{
    char *tail;
    size_t i;
    errno = 0;
    for (i = 0; i < size; i++) {
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
    size_t size;
    int ret;

    if (argc <= 1)
        goto usagefail;
    size = argc - 1;
    buffer1 = alloca(sizeof (buffer1) * size);
    buffer2 = alloca(sizeof (buffer2) * size);

    ret = parse_strings(buffer1, argv + 1, size);
    if (ret) {
        printf ("failed to parse numbers\n");
        goto usagefail;
    }

    differences_loop (buffer1, buffer2, size);
    return 0;

usagefail:
    print_help (argv[0]);
    return 1;
}
