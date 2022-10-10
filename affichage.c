//
// Created by mazer on 05/10/2022.
//
#include "header.h"
void print(tabArc arbreCouvrant) {
    int i, cost = 0;

    for (i = 0; i < arbreCouvrant.n; i++) {
        printf("\n%d - %d : %d", arbreCouvrant.data[i].u, arbreCouvrant.data[i].v, arbreCouvrant.data[i].w);
        cost = cost + arbreCouvrant.data[i].w;
    }

    printf("\nSpanning tree cost: %d", cost);
}
