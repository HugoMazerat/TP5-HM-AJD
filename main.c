#include "header.h"

int main( )
{
    ///DECLARATION DES VARIABLES
    int g[MAX][MAX];
    char* adr = "C:/Users/mazer/Desktop/ING2/theorieDesGraphes/TP5/graphe.txt";
    tabArc listeArc;
    tabArc arbreCouvrant;
    ///INITIALISATION MATRICE D'ADJACENCE
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            g[i][j]=0;
        }
    }

    ///DEBUT DE MON MAIN

    kruskal(g, adr, listeArc, arbreCouvrant);
    //print(arbreCouvrant);


}
