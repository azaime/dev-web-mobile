
#include <stdio.h>
#include <math.h>
#define PI 3.14

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
}


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


// Fonction pour calculer la surface d'un cercle
double surface_cercle(double rayon) {
    return PI * rayon * rayon; // La surface d'un cercle est pi * rayon^2
}

int main() {
    double rayon, surface;

    // Demander à l'utilisateur d'entrer le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer la surface du cercle en appelant la fonction
    surface = surface_cercle(rayon);

    // Afficher la surface du cercle
    printf("La surface du cercle est : %.2f\n", surface);

    return 0;
}


// Fonction pour calculer le périmètre (circonférence) d'un cercle
double perimetre_cercle(double rayon) {
    return 2 * PI * rayon; // Le périmètre d'un cercle est 2 * pi * rayon
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

// Fonction pour calculer la surface d'un cercle
double surface_cercle(double rayon) {
    return PI * rayon * rayon; // La surface d'un cercle est pi * rayon^2
}

int main() {
    double rayon, surface;

    // Demander à l'utilisateur d'entrer le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calculer la surface du cercle en appelant la fonction
    surface = surface_cercle(rayon);

    // Afficher la surface du cercle
    printf("La surface du cercle est : %.2f\n", surface);

    return 0;
}

// Fonction pour calculer le périmètre (circonférence) d'un cercle
double perimetre_cercle(double rayon) {
    return 2 * PI * rayon; // Le périmètre d'un cercle est 2 * pi * rayon
}

// Fonction pour calculer le volume d'une sphère
double volume_sphere(double rayon) {
    return (4.0 / 3.0) * PI * pow(rayon, 3); // Volume de la sphère : (4/3) * pi * rayon^3
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
