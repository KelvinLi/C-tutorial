#include <stdio.h>
#include <string.h>

int
main (int argc, char **argv)
{
    int i;
    int book_len;

    char book[] = {'T', 'h', 'e', ' ', 'A', 'r', 't', ' ',
                   'o', 'f', ' ', 'W', 'a', 'r', '\0'};

    /*
     * Alternative initialization:
     * char book[] = "The Art of War";
     */

    book_len = strlen (book);

    printf ("First character: (%c)\n", book[0]);
    printf ("Last character: (%c)\n", book[book_len - 1]);

    printf ("All characters: [");
    for (i = 0; i < book_len; i++) {
        printf ("(%c), ", book[i]);
    }
    printf("]\n");

    printf ("The original string: (%s)\n", book);

    return 0;
}
