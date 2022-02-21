#ifndef _PERSON_H
#define _PERSON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Structure à utiliser

struct Person{
	char* name;
	int age;
	float height;	
};


// Opérations de création

struct Person* createPerson(char name[32],int age, float height);

void editName(struct Person* p, char newName[32]);

void editAge(struct Person* p, int newAge);

void editHeight(struct Person* p, float newHeight);


// Opérations d'accès

char* getName(struct Person* p);

int getAge(struct Person* p);

float getHeight(struct Person* p);


// Suppression

void deletePerson(struct Person* p);


// Autres opérations

void printPerson(struct Person* p);

struct Person* oldest(struct Person* ps[],int n);

struct Person* tallest(struct Person* ps[],int n);

bool sameName(struct Person* ps[],int n);

bool allAdults(struct Person* ps[],int n);

int numberUnderAge(struct Person* ps[],int n);

void birthdayForAll(struct Person* ps[],int n);

#endif // _PERSON_H

