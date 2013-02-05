#include <stdio.h>
#define DATA_FILENAME "demo-data"

int
echo_stream_to_stdout (FILE *stream)
{
    int c;
    int i;
    for (i = 0; ; i++) {
        c = getc (stream);
        if (c == EOF)
            return i;
        c = putc (c, stdout);
        if (c == EOF)
            return -1;
    }
}

int
dump_stream (FILE *stream)
{
    int ret;
    ret = echo_stream_to_stdout (stream);
    if (ret < 0) {
        fprintf (stderr, "Failed echoing file\n");
        return -1;
    }
    fprintf (stderr, "Read %d characters\n", ret);
    return 0;
}

int
open_file (FILE **stream, const char *name)
{
    *stream = fopen (name, "r");
    if (!*stream) {
        fprintf (stderr, "Could not open file %s\n", name);
        return -1;
    }
    return 0;
}

int
close_file (FILE *stream)
{
    int ret;
    ret = fclose (stream);
    if (ret) {
        fprintf (stderr, "Could not close file \n");
        return -1;
    }
    return 0;
}

int
main (int argc, char **argv)
{
    FILE *data_stream;
    int err = 0;
    if (open_file (&data_stream, DATA_FILENAME) < 0)
        return 1;
    if (dump_stream (data_stream) < 0)
        err = 1;
    if (close_file (data_stream) < 0)
        err = 1;
    return err;
}
