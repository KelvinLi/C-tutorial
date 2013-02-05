#include <stdio.h>
#define PRIMES_SIZE 6

void
display_status (int primes[])
{
    int i;
    printf ("[");
    for (i = 0; i < PRIMES_SIZE - 1; i++)
        printf ("%d, ", primes[i]);
    printf ("%d", primes[i]);
    printf ("]\n");
}

void
boil (int primes[])
{
    int sum = 0;
    int i;
    for (i = 0; i < PRIMES_SIZE; i++) {
        sum += primes[i];
        primes[i] = sum;
    }
}

int
main (int argc, char **argv)
{
    int primes[PRIMES_SIZE] = {2, 3, 5, 7, 11, 13};

    printf ("Initial: ");
    display_status (primes);

    boil (primes);

    printf ("After boil(): ");
    display_status (primes);

    return 0;
}
