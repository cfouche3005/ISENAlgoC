//
// Created by cfouche on 29/03/2022.
//

#ifndef ISENALGOC_RESTO_H
#define ISENALGOC_RESTO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Resto{
    char* name;
    unsigned int quality;
    unsigned int distance;
    unsigned int time;
};

struct Resto* createResto(char* name,unsigned int quality, unsigned int distance);
char* getName(struct Resto* r);
unsigned int getQuality(struct Resto* r);
unsigned int getDistance(struct Resto* r);
unsigned int getTime(struct Resto* r);
void updateTime(struct Resto* r, unsigned int newTime);
void deleteResto(struct Resto** r);
void printResto(struct Resto* r);

#endif //ISENALGOC_RESTO_H
