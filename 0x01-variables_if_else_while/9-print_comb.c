#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Desc. of value
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x % 10 + '0');
if (x != 9)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
