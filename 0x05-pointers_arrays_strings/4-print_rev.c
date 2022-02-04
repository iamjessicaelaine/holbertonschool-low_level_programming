#include "main.h"

/**
 * print_rev  - prints a string in reverse followed by new line
 * _strlen - prints the length of a string
 * @s: a string
 * Return: return string in reverse for success
*/

int _strlen(char *s);

void print_rev(char *s)
{
int len, i;
char *start, *end, temp;

len = _strlen(s);
start = s;
end = s;

for (i = 0; i < len - 1; i++)
end++;
for (i = 0; i < len / 2; i++)
{
temp = *end;
*end = *start;
*start = temp;

start++;
end--;
}
}
