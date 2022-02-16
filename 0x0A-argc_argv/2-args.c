#include <stdio.h>

/**
 * main - prints all argumentts received including program name
 * @argc: size of argv
 * @argv: array which contains a programs command line arguments
 * Return: each argument received by function on it's own line
 */

int main(int argc, char *argv[])
{
int grow;

for (grow = 0; grow < argc; grow++)
printf("%s\n", argv[grow]);
return (0);
}
