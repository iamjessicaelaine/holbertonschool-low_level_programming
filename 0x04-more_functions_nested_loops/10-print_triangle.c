#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int j, e, l;

if (size > 0)
{
for (j = 1; j <= size; j++)
{
for (e = 1; e <= (size - j); e++)
{
_putchar(' ');
}
for (l = 1; l <= j; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
