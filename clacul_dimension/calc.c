#include <stdio.h>

// Fonction pour calculer la surface d'un carré
double surface_carre(double cote) {
    return cote * cote; // La surface d'un carré est côté * côté
}

int main() {
    double cote, surface;

    // Demander à l'utilisateur d'entrer la longueur du côté du carré
    printf("Entrez la longueur du côté du carré : ");
    scanf("%lf", &cote);

    // Calculer la surface du carré en appelant la fonction
    surface = surface_carre(cote);

    // Afficher la surface du carré
    printf("La surface du carré est : %.2f\n", surface);

    return 0;