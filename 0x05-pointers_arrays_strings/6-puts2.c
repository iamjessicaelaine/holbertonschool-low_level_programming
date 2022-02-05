#include "main.h"

/**
 * puts2 - prints every other character of a string starting w/ first character
 * @str: a string
 * Return: is void
 */

void puts2(char *str)
{
int j;
int e;

for (e = 0; str[e] != '\0'; e++)
{
}
e -= 1;
for (j = 0; j <= e; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
