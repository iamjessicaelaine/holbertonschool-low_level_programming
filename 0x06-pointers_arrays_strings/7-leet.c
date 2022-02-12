#include "holberton.h"

/**
 * leet - a function that converts a string into 1337
 * @j: a string to be encoded into leet
 * Return: a string that is now leet encoded
 */

char *leet(char *j)
{
int love;
int wins;
char original[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leetencoding[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (love = 0; j[love] != '\0'; love++)
{
for (wins = 0; wins < 10; wins++)
{
if (j[love] == original[wins])
{
j[love] = leetencoding[wins];
}
}
}
return (j);
}
