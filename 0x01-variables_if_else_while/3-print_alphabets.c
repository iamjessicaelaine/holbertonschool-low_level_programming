#include <stdio.h>

/**
 * main - main prints alphabet in lowercase and then in uppercase
 * Return: return 0 for success
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}
