#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compteur = 0;
int min = 0;
int max = 171;
int ligne_aleatoire = 0;

int main(void)
{
    //Génération nombre aléatoire entre min et max
    srand(time(NULL));
    ligne_aleatoire = rand() % (max - min + 1) + min;

    char ligne[1024];
    const char *fichier = "/usr/local/bin/evangiles.txt";
    FILE *f = fopen(fichier, "r");
    if (f == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier %s\n", fichier);
        return 1;
    }

    if (f != NULL)
    {
        while (fgets(ligne, sizeof(ligne), f) != NULL)
        {
            if (compteur == ligne_aleatoire)
            {
                printf("%s", ligne);
                break;
            }
            compteur++;
        }
    }
    return 0;
}