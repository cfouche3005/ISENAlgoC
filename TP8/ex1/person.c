#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "person.h"

// Opérations de création


struct Person* createPerson(char newName[32],int newAge, float newHeight){

	struct Person* p = malloc(sizeof(struct Person));
	
	if(p != NULL){
		p->name = malloc((strlen(newName)+1)*sizeof(char));
		if(p->name != NULL){
			stpcpy(p->name,newName);
			p->age = newAge;
			p->height = newHeight;
		}
	}
	
	return p;

}

void editName(struct Person* p, char newName[32]){
	
}

void editAge(struct Person* p, int newAge){

}

void editHeight(struct Person* p, float newHeight){

}


// Opérations d'accès

char* getName(struct Person* p){
	return p->name;
}

int getAge(struct Person* p){
	return p->age;
}

float getHeight(struct Person* p){
	return p->height;
}


// Suppression

void deletePerson(struct Person* p){

}


// Autres opérations

void printPerson(struct Person* p){		

	printf("Name: %s\n",getName(p));
	printf("Age: %d\n",getAge(p));
	printf("Height: %.2f\n",getHeight(p));


}

struct Person* oldest(struct Person* ps[],int n){

}

struct Person* tallest(struct Person* ps[],int n){

}

bool sameName(struct Person* ps[],int n){

}

bool allAdults(struct Person* ps[],int n){

}

int numberUnderAge(struct Person* ps[],int n){
	
}

void birthdayForAll(struct Person* ps[],int n){

}

