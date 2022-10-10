//
// Created by Antoine Jouvenot on 05/10/2022.
//

#include "header.h"

void prim(int G[MAX][MAX], int s0, char* adr)
{

    int distance[MAX],pred[MAX];
    int visite[MAX],count,distMin,smtSuiv,j;


    litFichier(adr, G);
    for(int i=0; i<MAX; i++)
    {
        for(int j = 0; j<MAX; j++)
        {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }

    //initialise pred[], distance[] and visite[]
    for(int i=0;i<MAX;i++)
    {
        distance[i]=G[s0][i];
        pred[i]=s0;
        visite[i]=0;
    }
    distance[s0]=0;
    visite[s0]=1;
    count=1;


}


