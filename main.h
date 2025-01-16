#include <stdio.h>
#include <string.h>


#define MAX_VOITURES 5


struct Voiture {
    char marque[50];
    char modele[50];
    int annee;
    float prixParJour;
    int disponible;
};


void afficherVoiture(struct Voiture v);
    

void afficherVoituresDisponibles(struct Voiture voitures[], int n);

void louerVoiture(struct Voiture voitures[], int n);

void rendreVoiture(struct Voiture voitures[], int n) ;


