#include <stdio.h>

// Fonction pour calculer la surface d'un rectangle
double surface_rectangle(double longueur, double largeur) {
    return longueur * largeur; // La surface d'un rectangle est longueur * largeur
}

int main() {
    double longueur, largeur, surface;

    // Demander à l'utilisateur d'entrer la longueur et la largeur du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);

    // Calculer la surface du rectangle en appelant la fonction
    surface = surface_rectangle(longueur, largeur);

    // Afficher la surface du rectangle
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}