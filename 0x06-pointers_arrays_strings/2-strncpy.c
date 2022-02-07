#include "holberton.h"

/**
 * strncpy - function that copies a string
 * @dest: a string where src will be copied to
 * @src: a string to be copied
 * @n: the number of characters to copy
 * Return: is dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
char *j = dest;

while (*src && n--)
{

*j = *src;
j++;
src++;
}
*j = '\0';
return (dest);
}
