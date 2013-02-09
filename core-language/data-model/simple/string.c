#include <stdio.h>

int
main (int argc, char **argv)
{
    /* A string is an array of integers of type (char),
     * terminated by the null character.
     *
     * These are single-byte strings. If you want something
     * beyond the ASCII encoding, the story gets a bit more
     * complicated.
     *
     * It is okay to over-allocate space for our string,
     * since the string semantically ends at the null.
     */
    char values[10];
    size_t i;

    values[0] = 'h';
    values[1] = 'e';
    values[2] = 'l';
    values[3] = 'l';
    values[4] = 'o';
    values[5] = '\0'; /* the null character literal */

    /* We over-allocated space, so the remaining uninitialized
     * elements have undefined values.
     */

    printf ("The individual characters: [");
    for (i = 0; values[i] != '\0'; i++) {
        printf ("'%c', ", values[i]);
    }
    printf("]\n");

    printf ("The string: (%s)\n", values);

    return 0;
}
