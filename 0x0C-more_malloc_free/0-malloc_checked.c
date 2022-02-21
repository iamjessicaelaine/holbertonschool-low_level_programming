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
	unsigned int *j;

	j = malloc(sizeof(unsigned int) * (b));
	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
