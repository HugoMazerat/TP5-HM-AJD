//
// Created by mazer on 05/10/2022.
//

#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H

//Les differents define

//#define MAX 9//A faire varier en fonction du nombre de sommets que l'on traite.
#define INFINITY 9999//Permet d'empecher le programme de passer par des chemins interdits.
#define TAILLEMAX 1000//Permet de créer un tableau


typedef struct arc {
    int u, v, w;
} arc;

typedef struct tabArc {
    arc data[17];
    int n;
} tabArc;

#endif //TP5_STRUCTURES_H
