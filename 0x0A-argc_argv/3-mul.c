#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: the size of argv
 * @argv: array containg the command line arguments
 * Return: an integer repping two numbers multiplied together or error
 */

int main(int argc, char *argv[])
{
int j, e;

if (argc != 3)
{
printf("Error\n");
return (1);
}

j = atoi(argv[1]);
e = atoi(argv[2]);
j *= e;

printf("%d\n", j);

return (0);
}
