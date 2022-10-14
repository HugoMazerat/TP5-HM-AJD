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
    //Je me suis aide du site https://www.programiz.com/dsa/kruskal-algorithm pour coder le programme.
    //lien du github : https://github.com/HugoMazerat/TP5-HM-AJD on a eu quelques problemes avec github, on en a donc cree 2.

}
