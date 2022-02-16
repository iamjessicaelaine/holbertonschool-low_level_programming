#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars & initializes it w/ a specific char
 * @size: size of array to be created as an integer
 * @c: specific character that initializes the array
 * Return: a pointer to an array or NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
char *j;
unsigned int e = 0;

j = malloc((size) * sizeof(char));
if (j == NULL && size == 0)
{
return (NULL);
}
while (e < size)
{
j[e] = c;
e++;
}
j[e] = '\0';
return (j);
}
