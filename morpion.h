#ifndef MORPION_H_INCLUDED
#define MORPION_H_INCLUDED

typedef struct Morpion morp;
struct Morpion {
    int tableau[3][3];
    int tour;
    int libre;
};

void initialiserTableau(morp *monMorpion);
void affichageMorpion(morp monMorpion);

#endif // MORPION_H_INCLUDED
