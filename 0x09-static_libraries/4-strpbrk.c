#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept otherwise null
 */

char *_strpbrk(char *s, char *accept)
{
int j, e, pos, flag = 0;
for (j = 0; s[j] != '\0'; j++)
pos = j;
for (j = 0; accept[j] != '\0'; j++)
{
for (e = 0; s[e] != '\0'; e++)
{
if (accept[j] == s[e])
{
if (e <= pos)
{
pos = e;
flag = 1;
}
}
}
}
if (flag == 1)
{
return (&s[pos]);
}
else
{
return (NULL);
}
}
