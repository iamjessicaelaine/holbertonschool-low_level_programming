#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @number: the number to be converted & printed
 * Return: void
 */

void print_binary(unsigned long int number)
{
	unsigned long int j;
	int i;

	if (number == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		j = number >> i;
		if (j & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
