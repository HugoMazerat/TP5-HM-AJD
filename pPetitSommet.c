//
// Created by mazer on 04/10/2022.
//
#include "header.h"

void tri(tabArc listeArc) {
    int i, j;
    arc temp;

    for (i = 1; i < listeArc.n; i++)
        for (j = 0; j < listeArc.n - 1; j++)
            if (listeArc.data[j].w > listeArc.data[j + 1].w) {
                temp = listeArc.data[j];
                listeArc.data[j] = listeArc.data[j + 1];
                listeArc.data[j + 1] = temp;
            }
}