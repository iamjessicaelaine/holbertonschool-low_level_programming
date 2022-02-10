#include "holberton.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @j: a string awaiting change
 * Return: a string where all lowecaser letters have been changed to uppercase
 */

char *string_toupper(char *j)
{
int e;

for (e = 0; j[e] != '\0'; e++)
{
if (j[e] >= 'a' && j[e] <= 'z')
{
j[e] = j[e] - 32;
}
}
return (j);
}
