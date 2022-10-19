#include "header.h"

int main( )
{
    int max;
    ///POUR RENDRE LE CODE ADAPTABLE
    printf("Entrer nombre de sommets dans le graphe :\n");
    scanf("%d", &max);
    char* adr = "C:/Users/mazer/Desktop/ING2/theorieDesGraphes/TP5/graphe.txt";

    ///DECLARATION DES VARIABLES

    int** G = (int**) malloc(max * sizeof(*G));
    for(int i=0 ; i < max ; i++) {
        G[i] = malloc(max * sizeof(**G));
    }
    if(G == NULL)
    {
        printf("Probleme malloc\n");
    }
    else
    {
        printf("Malloc ok\n");
    }

    printf("Stop 1\n");

    tabArc listeArc;
    tabArc arbreCouvrant;


    ///INITIALISATION MATRICE D'ADJACENCE


    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < max; j++)
        {
            G[i][j]=0;
        }
    }

    printf("\n\nVerification initialisation de la matrice :\n\n");

    for(int i = 0; i < max; i++)
    {
        for(int j = 0; j < max; j++)
        {
            printf("%d ",G[i][j]);
        }
        printf("\n");
    }

    printf("Stop 2\n");

    ///DEBUT DE MON MAIN

    kruskal(G, adr, listeArc, arbreCouvrant, max);
    //Je me suis aide du site https://www.programiz.com/dsa/kruskal-algorithm pour coder le programme.
    //lien du github : https://github.com/HugoMazerat/TP5-HM-AJD on a eu quelques problemes avec github, on en a donc cree 2.
    free(G);
}
