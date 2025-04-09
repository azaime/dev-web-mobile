#include <stdio.h>
#include <math.h>  // Pour utiliser la constante M_PI
#define M_PI 3.14159265358979323846

// Fonction pour calculer le volume d'une sphère
double volume_sphere(double rayon) {
    return (4.0 / 3.0) * M_PI * pow(rayon, 3); // Volume de la sphère : (4/3) * pi * rayon^3
}

int main() {
    double rayon, volume;

    // Demander à l'utilisateur d'entrer le rayon de la sphère
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);

    // Calculer le volume de la sphère en appelant la fonction
    volume = volume_sphere(rayon);

    // Afficher le volume de la sphère
    printf("Le volume de la sphère est : %.2f\n", volume);

    return 0;
}