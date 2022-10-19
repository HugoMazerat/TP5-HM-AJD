//
// Created by mazer on 04/10/2022.
//

#ifndef TP5_HEADER_H
#define TP5_HEADER_H


//Les differentes bibliotheques utilisees
#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

//Declaration differents ssprgm
void litFichier(char* adr, int** G, int max);
void insere(int sa, int sb, int pds, int** G, int max);
void kruskal(int** G, char* adr, tabArc listeArc, tabArc arbreCouvrant, int max);
int recherche(int belongs[], int vertexno);
void attache(int belongs[], int c1, int c2, int max);
tabArc tri(tabArc listeArc);
void print(tabArc arbreCouvrant);
#endif //TP5_HEADER_H
