#ifndef MORPION_H_INCLUDED
#define MORPION_H_INCLUDED

typedef struct Morpion morpion;
struct Morpion {
    int tableau[3][3];
    int tour;
    int libre;
};

void affichageMorpion();

#endif // MORPION_H_INCLUDED
