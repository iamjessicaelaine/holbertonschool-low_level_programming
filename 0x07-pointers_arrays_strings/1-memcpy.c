#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copies from src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
dest[j] = src[j];
return (dest);
}
