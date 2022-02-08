#include "holberton.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: 0 for strings being same, return -1 for different strings
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;

s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (-1);
}
