#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates and initializes memory for an array
 * @nmemb: number of elements in an array
 * @size: byte size of element
 * Return: a pointer to the allocated & initialized memory, or
 * returns null for malloc fail or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* pointer variable to hold address of memory allocated */
	char *j;
	/* if nmemb or size is 0 function returns null */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* memory allocation for the array */
	j = malloc(nmemb * size);
	/* check for malloc failure */
	if (j == NULL)
	{
		return (NULL);
	}
	/* set memory to 0 */
	_memset(j, 0, nmemb * size);
	return (j);
}
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: the contstant byte
 * @n: a number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
s[j] = b;
return (s);
}
