#include <stdio.h>
#include <string.h>

struct tomato {
    int spots;
    char name[10];
};

int
tomato_print (struct tomato *t)
{
    return printf("%s tomato with %d spots", t->name, t->spots);
}

void
fry (struct tomato t)
{
    const char fried_name[] = "FRIED";

    t.spots = t.spots + 100;
    memcpy (t.name, fried_name, sizeof (fried_name) / sizeof (*fried_name));
    fputs ("mutated by fry(): ", stdout);
    tomato_print (&t);
    fputs ("\n", stdout);
}

void
boil (struct tomato *t)
{
    const char boiled_name[] = "BOILED";

    t->spots = t->spots + 10;
    memcpy (t->name,
            boiled_name,
            sizeof (boiled_name) / sizeof (*boiled_name));
    fputs ("mutated by boil(): ", stdout);
    tomato_print (t);
    fputs ("\n", stdout);
}

int
main (int argc, char **argv)
{
    struct tomato thom = {2, "RAW"};

    fputs ("I have a ", stdout);
    tomato_print (&thom);
    fputs (".\n\n", stdout);

    fry (thom);
    fputs ("I still have a ", stdout);
    tomato_print (&thom);
    fputs (".\n\n", stdout);

    boil (&thom);
    fputs ("Now I have a ", stdout);
    tomato_print (&thom);
    fputs (".\n", stdout);

    return 0;
}
