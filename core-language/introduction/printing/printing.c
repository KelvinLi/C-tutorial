#include <stdio.h>

int
main (int argc, char **argv)
{
    int number_of_carrots = 5;
    double amount_of_juice = 1.23;
    char *unit_of_tomatoes = "a bag";
    char middle_initial = 'G';

    printf ("I have %d carrots.\n", number_of_carrots);
    printf ("Did you drink %g quarts of tomato juice?\n", amount_of_juice);
    printf ("I bought %s of tomatoes.\n", unit_of_tomatoes);
    printf ("Is he Henry %c. Upham?\n", middle_initial);

    printf ("\n");

    printf ("\tIndented line, and missing newline...");
    printf ("...new line here.\n");

    printf ("\n");

    printf ("Altogether we have %d carrots, %g quarts of tomato juice, %s, "
            "and a guy whose middle initial is \"%c\".\n",
            number_of_carrots, amount_of_juice, unit_of_tomatoes,
            middle_initial);

    return 0;
}
