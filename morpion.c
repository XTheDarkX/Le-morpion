#include <stdio.h>
#include <stdlib.h>
#include "morpion.h"

void affichageMorpion(morpion monMorpion) {

    int i = 0, j = 0;
    char temp[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; i < 3; i++) {
            if(monMorpion.tableau[i][j] == 1) {
                temp[i][j] = 'X';
            }
            else if(monMorpion.tableau[i][j] == 2) {
                temp[i][j] = 'O';
            }

            else {
                temp[i][j] = ' ';
            }
        }
    }

    printf("\n");
    printf("     1       2       3\n");
    printf("\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", temp[0][0], temp[0][1], temp[0][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", temp[1][0], temp[1][1], temp[1][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");
    printf(" *       *       *       *\n");
    printf(" *  %c    *   %c   *   %c   *\n", temp[2][0], temp[2][1], temp[2][2]);
    printf(" *       *       *       *\n");
    printf(" * * * * * * * * * * * * *\n");

}
