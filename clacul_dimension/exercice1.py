import math

def surface_carre(cote):
    return cote ** 2

def perimetre_carre(cote):
    return 4 * cote

def surface_rectangle(longueur, largeur):
    return longueur * largeur

def perimetre_rectangle(longueur, largeur):
    return 2 * (longueur + largeur)

def surface_cercle(rayon):
    return math.pi * rayon ** 2

def perimetre_cercle(rayon):
    return 2 * math.pi * rayon

def surface_sphere(rayon):
    return 4 * math.pi * rayon ** 2

def main():
    while True:
        print("Choisissez une option:")
        print("1. Calculer la surface d'un carré")
        print("2. Calculer le périmètre d'un carré")
        print("3. Calculer la surface d'un rectangle")
        print("4. Calculer le périmètre d'un rectangle")
        print("5. Calculer la surface d'un cercle")
        print("6. Calculer le périmètre d'un cercle")
        print("7. Calculer le périmètre d'une sphère")
        print("8. Calculer la surface d'une sphère")
        print("0. Quitter")

        choix = input("Entrez votre choix (0-8): ")

        if choix == '0':
            print("Au revoir!")
            break

        elif choix == '1':
            cote = float(input("Entrez la longueur du côté du carré: "))
            print(f"La surface du carré est: {surface_carre(cote)}")

        elif choix == '2':
            cote = float(input("Entrez la longueur du côté du carré: "))
            print(f"Le périmètre du carré est: {perimetre_carre(cote)}")

        elif choix == '3':
            longueur = float(input("Entrez la longueur du rectangle: "))
            largeur = float(input("Entrez la largeur du rectangle: "))
            print(f"La surface du rectangle est: {surface_rectangle(longueur, largeur)}")

        elif choix == '4':
            longueur = float(input("Entrez la longueur du rectangle: "))
            largeur = float(input("Entrez la largeur du rectangle: "))
            print(f"Le périmètre du rectangle est: {perimetre_rectangle(longueur, largeur)}")

        elif choix == '5':
            rayon = float(input("Entrez le rayon du cercle: "))
            print(f"La surface du cercle est: {surface_cercle(rayon)}")

        elif choix == '6':
            rayon = float(input("Entrez le rayon du cercle: "))
            print(f"Le périmètre du cercle est: {perimetre_cercle(rayon)}")

        elif choix == '7':
            rayon = float(input("Entrez le rayon de la sphère: "))
            print(f"Le périmètre (circonférence) de la sphère est: {perimetre_cercle(rayon)}")

        elif choix == '8':
            rayon = float(input("Entrez le rayon de la sphère: "))
            print(f"La surface de la sphère est: {surface_sphere(rayon)}")

        else:
            print("Choix invalide, essayez à nouveau.")

if __name__ == "__main__":
    main() 


# Fonction pour calculer la surface d'un carré
def surface_carre(cote):
    return cote ** 2  # La surface d'un carré est cote * cote

# Exemple d'utilisation
cote = float(input("Entrez la longueur du côté du carré : "))
surface = surface_carre(cote)
print(f"La surface du carré est : {surface}")


# Fonction pour calculer le périmètre d'un carré
def perimetre_carre(cote):
    return 4 * cote  # Le périmètre d'un carré est 4 fois la longueur du côté

# Exemple d'utilisation
cote = float(input("Entrez la longueur du côté du carré : "))
perimetre = perimetre_carre(cote)
print(f"Le périmètre du carré est : {perimetre}")

# Fonction pour calculer la surface d'un rectangle
def surface_rectangle(longueur, largeur):
    return longueur * largeur  # La surface d'un rectangle est longueur * largeur

# Exemple d'utilisation
longueur = float(input("Entrez la longueur du rectangle : "))
largeur = float(input("Entrez la largeur du rectangle : "))
surface = surface_rectangle(longueur, largeur)
print(f"La surface du rectangle est : {surface}")

# Fonction pour calculer le périmètre d'un rectangle
def perimetre_rectangle(longueur, largeur):
    return 2 * (longueur + largeur)  # Le périmètre d'un rectangle est 2 * (longueur + largeur)

# Exemple d'utilisation
longueur = float(input("Entrez la longueur du rectangle : "))
largeur = float(input("Entrez la largeur du rectangle : "))
perimetre = perimetre_rectangle(longueur, largeur)
print(f"Le périmètre du rectangle est : {perimetre}")

import math  # Pour utiliser la constante math.pi

# Fonction pour calculer la surface d'un cercle
def surface_cercle(rayon):
    return math.pi * rayon ** 2  # La surface d'un cercle est pi * rayon^2

# Exemple d'utilisation
rayon = float(input("Entrez le rayon du cercle : "))
surface = surface_cercle(rayon)
print(f"La surface du cercle est : {surface:.2f}")

import math  # Pour utiliser la constante math.pi

# Fonction pour calculer le périmètre (circonférence) d'un cercle
def perimetre_cercle(rayon):
    return 2 * math.pi * rayon  # Le périmètre d'un cercle est 2 * pi * rayon

# Exemple d'utilisation
rayon = float(input("Entrez le rayon du cercle : "))
perimetre = perimetre_cercle(rayon)
print(f"Le périmètre du cercle est : {perimetre:.2f}")

import math  # Pour utiliser la constante math.pi

# Fonction pour calculer le périmètre (circonférence) d'un cercle
def perimetre_cercle(rayon):
    return 2 * math.pi * rayon  # Le périmètre d'un cercle est 2 * pi * rayon

# Exemple d'utilisation
rayon = float(input("Entrez le rayon du cercle : "))
perimetre = perimetre_cercle(rayon)
print(f"Le périmètre du cercle est : {perimetre:.2f}")


import math  # Pour utiliser la constante math.pi

# Fonction pour calculer le volume d'une sphère
def volume_sphere(rayon):
    return (4/3) * math.pi * rayon**3  # Volume de la sphère : (4/3) * pi * rayon^3

# Exemple d'utilisation
rayon = float(input("Entrez le rayon de la sphère : "))
volume = volume_sphere(rayon)
print(f"Le volume de la sphère est : {volume:.2f}")

