#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: a string, the intial one
 * @dest: a string, the destinatioh one
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

char *j = dest;
char *e = src;

while (*j != '\0')
j++;

while (*e != '\0')
{
*j = *e;
j++;
e++;
}

return (dest);
}
