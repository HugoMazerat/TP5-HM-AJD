//
// Created by mazer on 04/10/2022.
//

#include "header.h"

void litFichier(char *adr, int** G, int max){
    FILE *f;
    int sa,sb,pds,nbArcs;//sa = sommet a, sb = sommet b, pds = poids, nbArcs.
    f=fopen(adr,"r");//adr = nom du fichier

    if(f == NULL)
    {
        printf("Erreur lecture fichier");
    }


    fscanf(f,"%d",&nbArcs);//>>Lit le nbm d'arcs contenus dans le graphe
    nbArcs = 17;
    while (nbArcs){
        fscanf(f,"%d %d %d",&sa,&sb,&pds);//Lit les differentes adjacences avec le poids de chacun des arcs
        insere(sa,sb,pds, G, max); //Insere chaque donnee recuperee dans la matrice d'adjacence.
        nbArcs--;
    }
    fclose(f);//Fermeture du fichier
}