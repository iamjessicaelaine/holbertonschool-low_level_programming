#include <stdio.h>

/**
 * main - prints a program's name
 * @argc: size of argv
 * @argv: array containing the program's command line arguments
 * Return: the name of the program
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
