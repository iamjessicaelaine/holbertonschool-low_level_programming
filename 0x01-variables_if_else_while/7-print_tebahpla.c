#include <stdio.h>

/**
 * main - main prints alphabet in lowercase followed by a new line
 * Return: return 0 for success
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x++)
putchar(x);
putchar('\n');
return (0);
}
