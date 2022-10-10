//
// Created by mazer on 05/10/2022.
//
#include "header.h"

void attache(int belongs[], int c1, int c2, int n) {
    int i;

    for (i = 0; i < n; i++)
        if (belongs[i] == c2)
        {
            belongs[i] = c1;
        }
}