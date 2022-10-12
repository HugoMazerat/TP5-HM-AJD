//
// Created by mazer on 04/10/2022.
//

#include "header.h"

void kruskal(int G[MAX][MAX], char* adr, tabArc listeArc, tabArc arbreCouvrant)
{
    int ppArbre = INFINITY;
    int s0, s1;
    int j,i;

    litFichier(adr, G);
    for(i=0; i<MAX; i++)
    {
        for(j = 0; j<MAX; j++)
        {
            printf("%d ", G[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            if(G[i][j] != 0)
            {
                if(G[i][j] <= ppArbre)
                {
                    ppArbre = G[i][j];
                    s0 = i;
                    s1 = j;
                }
            }
        }
    }
    printf("\nLe plus petit arc est de longueur : %d", ppArbre);
    printf("\nIl est situe entre les sommets %d et %d", s0, s1);

    int belongs[TAILLEMAX], cno1, cno2;
    listeArc.n = 0;

    for (i = 1; i < 9; i++) {
        for (j = 0; j < i; j++) {
            if (G[i][j] != 0) {
                listeArc.data[listeArc.n].u = i;
                listeArc.data[listeArc.n].v = j;
                listeArc.data[listeArc.n].w = G[i][j];
                listeArc.n++;
            }
        }
    }
    printf("\n\n Premier affichage : \n");
    printf("u v w\n");
    for (i = 0; i < listeArc.n; i++) {
        printf("%d ", listeArc.data[i].u);
        printf("%d ", listeArc.data[i].v);
        printf("%d\n", listeArc.data[i].w);
    }
    listeArc = tri(listeArc);

    printf("\n\n affichage apres tri : \n");
    for (i = 0; i < MAX; i++) {
        printf("%d ", listeArc.data[i].u);
        printf("%d ", listeArc.data[i].v);
        printf("%d\n", listeArc.data[i].w);
    }

    for (i = 0; i < MAX; i++) {
        belongs[i] = i;
    }

    arbreCouvrant.n = 0;

    for (i = 0; i < listeArc.n; i++) {
        cno1 = recherche(belongs, listeArc.data[i].u);
        cno2 = recherche(belongs, listeArc.data[i].v);

        if (cno1 != cno2) {
            arbreCouvrant.data[arbreCouvrant.n] = listeArc.data[i];
            arbreCouvrant.n = arbreCouvrant.n + 1;
            attache(belongs, cno1, cno2);
        }
    }
    print(arbreCouvrant);
}
