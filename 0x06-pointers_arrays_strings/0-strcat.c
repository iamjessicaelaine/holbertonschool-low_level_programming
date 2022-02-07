#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: a string, the intial one
 * @dest: a string, the destinatioh one
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
/* dest = 'hello ' and src = 'world!'; */

char *j = dest;
char *e = src;

/* moves k to end of dest string */
while (*j != '\0')
j++;

/* while *e is non-null */
while (*e != '\0')
{
*j = *e;
j++;
e++;
}

/* return dest */
return (dest);
}
