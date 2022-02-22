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


#endif /* DOG_H */
