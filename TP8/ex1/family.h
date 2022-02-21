#ifndef _FAMILY_H
#define _FAMILY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "person.h"

#define MAX_CHILDREN 5


// Structure à utiliser

struct Family{		
	struct Person* mom;
	struct Person* dad;
	int numberChildren;
	struct Person* children[MAX_CHILDREN];	
};


// Opérations de création

struct Family* createFamily(struct Person* mom, struct Person* dad);

void addChild(struct Family* f, struct Person* child);


// Opérations d'accès

struct Person* getMom(struct Family* f);

struct Person* getDad(struct Family* f);

int numberOfChildren(struct Family* f);

struct Person** getChildren(struct Family* f);


// Suppression

void deleteFamily(struct Family* f);

// Autres opérations

void printFamily(struct Family* f);

bool hasChildren(struct Family* f);

struct Person* firstborn(struct Family* f);

bool hasTwins(struct Family* f);

bool tallerChild(struct Family* f);

bool belongs(struct Family* f, char name[32]);

void modernTimes(struct Family* f1, struct Family* f2);


#endif // _FAMILY_H
