#include <stdio.h>

/**
 * main - main prints base 16
 * Return: return 0 for success
 */
int main(void)
{
char x;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
