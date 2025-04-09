#include <stdio.h>

// Fonction pour calculer le périmètre d'un rectangle
double perimetre_rectangle(double longueur, double largeur) {
    return 2 * (longueur + largeur); // Le périmètre d'un rectangle est 2*(longueur + largeur)
}

int main() {
    double longueur, largeur, perimetre;

    // Demander à l'utilisateur d'entrer la longueur et la largeur du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);

    // Calculer le périmètre du rectangle en appelant la fonction
    perimetre = perimetre_rectangle(longueur, largeur);

    // Afficher le périmètre du rectangle
    printf("Le périmètre du rectangle est : %.2f\n", perimetre);

    return 0;
}