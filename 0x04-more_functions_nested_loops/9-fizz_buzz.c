#include "main.h"

/**
 * main - fizz buzz test
 * Return: 0 for success
 */

int main(void)
{
int j;

for (j = 1; j <= 100; j++)
{
if (j % 15 == 0)
{
printf(" FizzBuzz");
}
else if (j % 3 == 0)
{
printf(" Fizz");
}
else if (j % 5 == 0)
{
printf(" Buzz");
}
else if (j == 1)
{
printf("%d", j);
}
else
{
printf(" %d", j);
}
}
printf("\n");
return (0);
}
