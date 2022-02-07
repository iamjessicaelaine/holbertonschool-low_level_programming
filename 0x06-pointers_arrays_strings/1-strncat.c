#include "holberton.h"

/**
 * _strncat - a function that concatenates two strings
 * @src: a string, the intial one
 * @dest: a string, the destination one
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *j = dest;
char *e = src;

while (*j != '\0')
j++;

while (*e != '\0' && n--)
{
*j = *e;
j++;
e++;
}

return (dest);
}
