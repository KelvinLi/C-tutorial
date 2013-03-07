#include <stdio.h>

int
main (int argc, char **argv)
{
    /* Equivalent to the usual array initialization syntax:
     *    char values[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
     */
    char values[10] = "hello";
    size_t i;

    printf ("[");
    for (i = 0; values[i] != '\0'; i++) {
        printf ("'%c', ", values[i]);
    }
    printf ("]\n");

    printf ("(%s)\n", values);

    return 0;
}
