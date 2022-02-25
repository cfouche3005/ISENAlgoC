#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "person.h"

int main(int argc, char** argv){

	
	struct Person* child1 = createPerson("Clément", 18, 1.71);
    struct Person* child2 = createPerson("Émilien", 13, 1.55);
    struct Person* mom = createPerson("Karine", 50, 1.55);
    struct Person* dad = createPerson("Pascal", 55, 1.70);
	
	printPerson(child1);
    printPerson(child2);
    printPerson(mom);
    printPerson(dad);

	
	return 0;
}

