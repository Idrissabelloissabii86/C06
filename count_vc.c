#include <stdio.h>
#include <ctype.h>  // Pour tolower() et isalpha()

#define TAILLE_MAX 1000

int est_voyelle(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    char chaine[TAILLE_MAX];
    int voyelles = 0, consonnes = 0;

    if (fgets(chaine, TAILLE_MAX, stdin) == NULL) {
        printf("Erreur de lecture.\n");
        return 1;
    }

    for (int i = 0; chaine[i] != '\0'; i++) {
        char c = chaine[i];
        if (isalpha(c)) { // Vérifie si c'est une lettre
            if (est_voyelle(c))
                voyelles++;
            else
                consonnes++;
        }
    }

    printf("Voyelles : %d, Consonnes : %d\n", voyelles, consonnes);

    return 0;
}
