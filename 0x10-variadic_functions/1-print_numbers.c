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
	if (n == 0 || args == NULL) /* protect function frm empty list of arg */
	{
		return;
	}
	else if (separator != NULL) /* capturing the null */
	{
		while (j < n)
		{
		       printf("%d%s", va_arg(args, int), separator);
		       j++;
		}
		printf("\n");
		va_end(args);
		return;
	}
	while (j < n)
	{
		j++;
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
	return;
}
