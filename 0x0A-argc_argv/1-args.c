#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the size of the argv array
 * @argv: an array containig a program's command line arguments
 * Return: # of arguments passed into the program
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc);
return (0);
}
