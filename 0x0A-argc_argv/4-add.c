#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive nmbers
 * @argc: size of argv
 * @argv: an array of command line arguments
 * Return: some fun & correct stuff hopeully
 */

int main(int argc, char *argv[])
{
int sum = 0;
int j = 1;

if (argc > 1)
{
for (j = 1; argv[j]; j++)
{
char *endptr;

sum += strtol(argv[j], &endptr, 10);
if (*endptr != '\0')
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}

