#include "variadic_functions.h"


/**
 * print_numbers - functions prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: is void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* points to list w/ all the args */

	unsigned int j = 0; /* initialized counter variable */

	va_start(args, n); /* initializes args & enables access to variadic
			    * function arguments.
			    */
	while (j < n && separator != NULL)
	{
		printf("%d", va_arg(args, int));
		j++;
		if (j <= (n - 1) && separator != NULL)
		{
			printf("%s", separator);
			}
	}
	printf("\n");
	va_end(args);
}
