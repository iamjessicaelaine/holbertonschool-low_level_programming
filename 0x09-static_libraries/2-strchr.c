#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a string to be checked
 * @c: a character to be located
 * Return: a pointer to the first occurence of c in s or NULL if not found
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
