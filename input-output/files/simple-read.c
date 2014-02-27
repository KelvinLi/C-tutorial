#include <errno.h>
#include <stdio.h>

/* TRY THIS: Change this constant to scramble the output! */
#define SCRAMBLE_OFFSET 0

const char *const DATA_FILENAME = "demo-data";

static char
scramble_char (const char c)
{
    return (c + SCRAMBLE_OFFSET) & 127;
}

static int
scramble_stream (FILE *const stream)
{
    size_t n_chars;
    int c;

    for (n_chars = 0; ; n_chars++) {
        c = getc (stream);
        if (c == EOF)
            break;

        c = scramble_char (c);

        if (c != putc_unlocked (c, stdout)) {
            fprintf (stderr, "Failed writing to standard output\n");
            return -1;
        }
    }

    fprintf (stderr, "Read %zu characters\n", n_chars);
    return 0;
}

int
main (void)
{
    FILE *data_stream;
    int err = 0;

    data_stream = fopen (DATA_FILENAME, "r");
    if (!data_stream) {
        fprintf (stderr, "Could not open file %s\n", DATA_FILENAME);
        return 1;
    }

    if (scramble_stream (data_stream) == -1)
        err = 1;

    if (fclose (data_stream)) {
        fprintf (stderr, "Could not close file %s\n", DATA_FILENAME);
        err = 1;
    }

    return err;
}
