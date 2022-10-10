//
// Created by mazer on 04/10/2022.
//

#ifndef TP5_HEADER_H
#define TP5_HEADER_H


//Les differentes bibliotheques utilisees
#include <stdio.h>
#include "structures.h"

//Declaration differents ssprgm
void litFichier(char* adr, int G[MAX][MAX]);
void insere(int sa, int sb, int pds, int G[MAX][MAX]);
void kruskal(int G[MAX][MAX], char* adr, tabArc listeArc, tabArc spanlist, int n);
int recherche(int belongs[], int vertexno);
void attache(int belongs[], int c1, int c2, int n);
void tri();
void print();
#endif //TP5_HEADER_H