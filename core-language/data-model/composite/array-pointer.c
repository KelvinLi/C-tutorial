#include <stdio.h>

/* array of pointers */

int
main (int argc, char **argv)
{
    char *names[3];
    char a[] = "Alice";
    char b[] = "Bob";
    char c[] = "Cindy";
    size_t i;

    /* Note: each element of 'names' is of type (char *), while the types of
     * a, b, and c are (char [6]), (char [4]), and (char [6]), respectively.
     *
     * See README for semantics of assigning an array to a pointer.
     */
    names[0] = a;
    names[1] = b;
    names[2] = c;

    for (i = 0; i < 3; i++)
        printf ("Hello %s\n", names[i]);

    printf ("\nDefacing Bob...\n\n");

    b[1] = 'a';
    b[2] = 'd';

    for (i = 0; i < 3; i++)
        printf ("Hello %s\n", names[i]);

    return 0;
}
