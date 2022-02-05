#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: is void
 */

void print_diagonal(int n)
{
char j;
char e;

if (n > 0)
{
for (e = 0; e < n; e++)
{
for (j = 0; j < e; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
