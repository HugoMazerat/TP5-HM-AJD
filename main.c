#include <stdio.h>
#include "header.h"





int main() {

    ///Initialisation matrice d'adjacence

    int g[MAX][MAX];
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            g[i][j]=0;
        }
    }

    int choix;//Choix = sommet de départ

    printf("Entrer sommet de depart\n");
    scanf("%d", &choix);

    char* adr = "/Users/antoinejouvenot/Desktop/ECE/A2/S1/Theories des graphes/TP5/graphe.txt";

    ///Test fonctionnement de la matrice d'adjacence en l'affichant si besoin

    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }


    prim(g,choix,adr);

    printf("Hello, World!\n");
    return 0;
}
