#include "main.h"

/**
 * print_rev  - prints a string in reverse followed by new line
 * @s: a string
 * Return: return string in reverse for success
*/

void print_rev(char *s)
{
int length;
int j;
char *start_ptr;
char *end_ptr;
char i;

length = _strlen(s);

start_ptr = s;
end_ptr = s;

for (j = 0; j < length - 1; j++)
end_ptr++;
for (j = 0; j < length / 2; j++)
{
i = *end_ptr;
*end_ptr = *start_ptr;
*start_ptr = i;

start_ptr++;
end_ptr--;
}
}
