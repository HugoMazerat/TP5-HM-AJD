//
// Created by mazer on 04/10/2022.
//

#include "header.h"

void insere(int sa, int sb, int pds, int** G, int max)
{
    for(int i = 0; i < max; i++)//On parcours la matrice d'adjacence
    {
        for(int j = 0; j < max; j++)
        {
            if(i == sa && j == sb)//Lorsque l'on arrive a une case correspondant a 2 sommet adjacents
            {
                G[i][j] = pds;//On affecte le poids a cette case
            }
            if(i == sb && j == sa)//Meme condition qu'au dessus
            {
                G[i][j] = pds;//On affecte le poids a cette case aussi
            }
            if(G[i][j] == 0 && i != j)//Si 2 sommets ne sont pas adjacent, la distance est consideree comme infini
            {
                G[i][j] = 0;
            }
            if(i == j)//Si on se positionne sur un sommet precis, la distance qui le separe de lui meme est de 0
            {
                G[i][j] = 0;
            }
        }
    }
}