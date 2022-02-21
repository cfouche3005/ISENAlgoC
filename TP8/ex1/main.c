#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "person.h"

int main(int argc, char** argv){

	
	struct Person* p = createPerson("John", 25, 1.99);
	
	printPerson(p);

	deletePerson(p);
	
	return 0;
}
