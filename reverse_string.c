#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 1000

int main() {
    char chaine[TAILLE_MAX];
    // Lire une ligne de texte
    if (fgets(chaine, TAILLE_MAX, stdin) == NULL) {
        printf("Erreur de lecture.\n");
        return 1;
    }

    // Supprimer le saut de ligne si présent
    size_t longueur = strlen(chaine);
    if (chaine[longueur - 1] == '\n') {
        chaine[longueur - 1] = '\0';
        longueur--;
    }

    // Afficher la chaîne inversée
    printf("Chaîne inversée : ");
    for (int i = longueur - 1; i >= 0; i--) {
        putchar(chaine[i]);
    }
    putchar('\n');

    return 0;
}
