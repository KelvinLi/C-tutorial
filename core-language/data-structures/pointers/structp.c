#include <stdio.h>

int
main (int argc, char **argv)
{
    struct clownfish {
        struct sea_anemone *protector;
        double size;
        char *name;
    } the_clownfish;

    struct sea_anemone {
        struct clownfish *feeder;
        int tentacles;
        char *label;
    } the_sea_anemone;

    struct clownfish *nemo;
    struct sea_anemone *harry;

    the_clownfish.size = 1.5;
    the_clownfish.name = "Nemo";
    the_sea_anemone.tentacles = 400;
    the_sea_anemone.label = "Harry";

    harry = &the_sea_anemone;
    nemo = &the_clownfish;

    printf ("The clownfish is %gcc in size.\n", the_clownfish.size);
    printf ("The sea anemone has %d tentacles.\n", the_sea_anemone.tentacles);

    printf ("\n");

    printf ("Greetings:\n");
    printf ("I am a clownfish; my name is %s\n", (*nemo).name);
    printf ("    ... and mine is %s--I am a sea anemone.\n", (*harry).label);

    printf ("\n");

    printf ("Again:\n");
    printf ("I am %s\n", nemo->name);
    printf ("And I am %s\n", harry->label);

    printf ("\n");

    printf ("Creating symbiotic relationship...\n");
    nemo->protector = harry;
    harry->feeder = nemo;

    printf ("\n");

    printf ("%s's protector is %s.\n", nemo->name, (*(*nemo).protector).label);
    printf ("%s's feeder is %s.\n", harry->label, harry->feeder->name);
    printf ("The feeder of %s's protector is %s.\n",
            nemo->name, nemo->protector->feeder->name);

    return 0;
}
