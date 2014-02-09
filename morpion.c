#include <stdio.h>
#include <stdlib.h>
#include "morpion.h"

void affichageMorpion() {
    printf("\n");
    printf("     1       2       3\n");
    printf("\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", tableau[0][0], tableau[0][1], tableau[0][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", tableau[1][0], tableau[1][1], tableau[1][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", tableau[2][0], tableau[2][1], tableau[2][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");
}
