#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and checks for failure
 * @b: an unsigned integer representing # of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* pointer variable used to hold the address of memory allocated */
	int *j;

	/* memory allocation */
	j = malloc(b);
	/* check for malloc failure */
	if (j == NULL)
	{
		exit(98);
	}
	/* malloc success return the address for newly allocated memory */
	return (j);
}
