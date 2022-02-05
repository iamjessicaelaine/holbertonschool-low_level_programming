#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 w/ new line
 * Return: is void
 */

void print_most_numbers(void)
{
char j;

for (j = '0'; j <= '9'; j++)
{
if (j != '2' && j != '4')
_putchar(j);
}
_putchar('\n');
}
