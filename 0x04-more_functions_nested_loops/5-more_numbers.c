#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int purp = 0;
int j;

for (purp = 1; purp <= 10; purp++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
 _putchar('\n');
}
}
