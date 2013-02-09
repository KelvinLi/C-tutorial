#include <stdio.h>

/* struct pointing to itself */

struct russian_doll {
    struct russian_doll *child;
    int id;
};

int
main (int argc, char **argv)
{
    struct russian_doll zena;
    struct russian_doll yity;
    struct russian_doll xate;
    struct russian_doll wilb;
    struct russian_doll vemt;

    struct russian_doll *tmp;

    zena.id = 0;
    yity.id = 1;
    xate.id = 2;
    wilb.id = 3;
    vemt.id = 4;

    zena.child = &yity;
    yity.child = &xate;
    xate.child = &wilb;
    wilb.child = &vemt;
    vemt.child = NULL;  /* what happens if we point vemt to zena? */

    printf ("zena's child is doll %d.\n", zena.child->id);
    printf ("xena's child is doll %d.\n", yity.child->id);
    printf ("zena's great-grandchild is doll %d.\n",
            zena.child->child->child->id);
    printf ("vemt is doll %d.\n", vemt.id);

    printf ("\nWalking the doll lineage:\n");
    for (tmp = &zena; tmp; tmp = tmp->child) {
        printf ("  Found doll %d.\n", tmp->id);
    }
    printf ("Last doll does not have a child.\n");

    return 0;
}
