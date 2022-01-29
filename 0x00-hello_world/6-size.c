#include <stdio.h>

/**
 * main - main prints size of various types
 * Return: return 0 for success
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i bytes(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
