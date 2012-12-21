#include <stdio.h>

/* prints to standard output an array of non-negative numbers,
 * terminating at a negative number.
 */
void
display_status (int positives[])
{
    int i;
    printf ("[");
    if (positives[0] < 0)
        goto end;
    for (i = 0; positives[i + 1] >= 0; i++)
        printf ("%d, ", positives[i]);
    printf ("%d", positives[i]);
end:
    printf ("]\n");
}

void
boil (int positives[])
{
    int sum = 0;
    int i;
    for (i = 0; positives[i] >= 0; i++) {
        sum += positives[i];
        positives[i] = sum;
    }
}

int
main (int argc, char **argv)
{
    int positives[] = {3, 78, 1, 0, 992, -1};

    printf ("Initial: ");
    display_status (positives);

    boil (positives);

    printf ("After boil(): ");
    display_status (positives);

    return 0;
}
