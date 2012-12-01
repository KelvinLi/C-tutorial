#include <stdio.h>

int
main (int argc, char **argv)
{
    int a = 5;
    int b = 2;
    int c = 3;
    double x = 5.0;
    double y = 2.0;
    double z = 3.0;

    printf ("Integer arithmetic:\n");
    printf ("a = %d\n", a);
    printf ("b = %d\n", b);
    printf ("c = %d\n", c);
    printf ("a + b = %d\n", a + b);
    printf ("c * b = %d\n", c * b);
    printf ("c - a * (a + b) = %d\n", c - a * (a + b));
    printf ("a / b = %d\n", a / b);
    printf ("b / c = %d\n", b / c);

    printf ("\n");

    printf ("Floating-point arithmetic:\n");
    printf ("x = %g\n", x);
    printf ("y = %g\n", y);
    printf ("z = %g\n", z);
    printf ("x + y = %g\n", x + y);
    printf ("z * y = %g\n", z * y);
    printf ("z - x * (x + y) = %g\n", z - x * (x + y));
    printf ("x / y = %g\n", x / y);
    printf ("y / z = %g\n", y / z);
    return 0;
}
