#include "main.h"

/**
 * _puts - prints a string followed by new line to stdout
 * @str: a string
 * Return: return string to stdout for success
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
_putchar('\n');
}
}
