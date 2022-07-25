#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int plus_moins(int valeur_a_trouver, int nombre_choix)
{
    while (valeur_a_trouver != nombre_choix)
    {
        if (valeur_a_trouver < nombre_choix)
        {
            printf("c'est MOINS,veuillez reessayer\n");
        }
        else if (valeur_a_trouver > nombre_choix)
        {
           printf("c'est PLUS,veuillez reessayer\n");
        }
        printf("Veuillez entrer un autre chiffre: ");
        scanf("%d",&nombre_choix);
    }
    if(valeur_a_trouver == nombre_choix)
    {
        printf("BINGO!vous avez trouve le chiffre mystere\n");
    }

}
int main()
{
    int valeur,choix;
    srand(time(NULL));
    valeur=rand()%100;
    printf("BIENVENU!!! dans le JEU PLUS OU MOINS.Le but est de deviner le chiffre mystere\n");
    printf("Entrer un chiffre entre 1 a 100 : ");
    scanf("%d",&choix);
    plus_moins(valeur,choix);
}
