#include "main.h"

/**
 * _puts_recursion - a function that prints a string followed by a new line
 * @j: a string to be printed
 * Return: a string followed by a new line
 */

void _puts_recursion(char *j)
{
if (*j == '\0')
{
_putchar('\n');
return;
}
else if (*j != '\0')
{
_putchar(*j);
_puts_recursion(++j);
}
}
