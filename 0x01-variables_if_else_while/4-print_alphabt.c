#include <stdio.h>

/**
 * main - main prints alphabet in lowercase but not q&e
 * Return: return 0 for success
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'q' && x != 'e')
putchar(x);
putchar('\n');
return (0);
}
