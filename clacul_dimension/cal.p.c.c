#include <stdio.h>

// Fonction pour calculer le périmètre d'un carré
double perimetre_carre(double cote) {
    return 4 * cote; // Le périmètre d'un carré est 4 fois la longueur du côté
}

int main() {
    double cote, perimetre;

    // Demander à l'utilisateur d'entrer la longueur du côté du carré
    printf("Entrez la longueur du côté du carré : ");
    scanf("%lf", &cote);

    // Calculer le périmètre du carré en appelant la fonction
    perimetre = perimetre_carre(cote);

    // Afficher le périmètre du carré
    printf("Le périmètre du carré est : %.2f\n", perimetre);

    return 0;
}