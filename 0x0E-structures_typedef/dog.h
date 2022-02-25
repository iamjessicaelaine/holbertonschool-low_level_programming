#ifndef DOG_H
#define DOG_H

/* includes */

#include <unistd.h>
#include <stdio.h>


/* structures */

/**
 * struct dog - multivariable w/ three members
 * @name: points to the dogs name
 * @age: contains the dogs age
 * @owner: points to the name of owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
