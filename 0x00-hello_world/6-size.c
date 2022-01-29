#include <stdio.h>

/**
 * main - main prints size of various types
 * Return: return 0 for success
 */
int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of an int: %d bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lld byte(s)\n", sizeof(long long));
printf("Size of a float: %f byte(s)", sizeof(float));
return (0);
}
