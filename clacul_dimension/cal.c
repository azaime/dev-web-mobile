#include <stdio.h>
#include <math.h>  // Pour utiliser la constante M_PI

// Fonction pour calculer le périmètre (circonférence) d'un cercle
double perimetre_cercle(double rayon) {
    return 2 * M_PI * rayon; // Le périmètre d'un cercle est 2 * pi * rayon
}

int main() {
    double rayon, perimetre;

    // Demander à l'utilisateur d'entrer le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer le périmètre du cercle en appelant la fonction
    perimetre = perimetre_cercle(rayon);

    // Afficher le périmètre du cercle
    printf("Le périmètre du cercle est : %.2f\n", perimetre);

    return 0;
}