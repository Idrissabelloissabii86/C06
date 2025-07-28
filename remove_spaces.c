#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 1000

int main() {
    char chaine[TAILLE_MAX];
    char nettoyee[TAILLE_MAX];
    int j = 0;

    
    if (fgets(chaine, TAILLE_MAX, stdin) == NULL) {
        printf("Erreur de lecture.\n");
        return 1;
    }

    // Supprimer le saut de ligne à la fin si présent
    size_t len = strlen(chaine);
    if (chaine[len - 1] == '\n') {
        chaine[len - 1] = '\0';
    }

    // Parcourir et copier les caractères sauf les espaces
    for (int i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] != ' ') {
            nettoyee[j++] = chaine[i];
        }
    }
    nettoyee[j] = '\0';  // Fin de chaîne

    printf("Résultat : %s\n", nettoyee);

    return 0;
}
