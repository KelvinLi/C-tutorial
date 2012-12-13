#include <stdio.h>

int
main (int argc, char **argv)
{
    int *p, *q;
    int numbers[] = {123, -456, 789};

    printf ("numbers: %d %d %d\n", numbers[0], numbers[1], numbers[2]);
    
    p = numbers;
    q = numbers + 1;
    printf ("p[0] = %d\n", p[0]);
    printf ("q[0] = %d\n", q[0]);

    printf ("\nModifying p[1]...\n");
    p[1] = 888;
    printf ("numbers: %d %d %d\n", numbers[0], numbers[1], numbers[2]);
    
    printf ("\nModifying q[1]...\n");
    q[1] = 555;
    printf ("numbers: %d %d %d\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}
