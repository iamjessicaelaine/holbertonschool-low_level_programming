#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @j: a string ready to get some capitalization
 * Return: a string with all words capitalized when successful
 */

char *cap_string(char *j)
{
int e;

for (e = 0; j[e] != '\0'; e++)
{
if (j[e] >= 'a' && j[e] <= 'z')
{
if (j[e - 1] == ' ' ||
j[e - 1] == '\t' ||
j[e - 1] == '\n' ||
j[e - 1] == ',' ||
j[e - 1] == ';' ||
j[e - 1] == '.' ||
j[e - 1] == '!' ||
j[e - 1] == '?' ||
j[e - 1] == '"' ||
j[e - 1] == '(' ||
j[e - 1] == ')' ||
j[e - 1] == '{' ||
j[e - 1] == '}' ||
e == 0)
{
j[e] = j[e] - 32;
}
}
}
return (j);
}
