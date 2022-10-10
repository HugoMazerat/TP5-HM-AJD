//
// Created by Antoine Jouvenot on 04/10/2022.
//

#ifndef TP5_HEADER_H
#define TP5_HEADER_H

#include <stdio.h>

#define MAX 9//A faire varier en fonction du nombre de sommets que l'on traite.
#define INFINITY 9999//Permet d'empecher le programme de passer par des chemins interdits.


void litFichier(char *adr, int G[MAX][MAX]);
void insere(int sa, int sb, int pds, int G[MAX][MAX]);
void prim(int G[MAX][MAX], int s0, char* adr);


#endif //TP5_HEADER_H
