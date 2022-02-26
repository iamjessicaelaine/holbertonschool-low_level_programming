#include "variadic_functions.h"

/**
 * sum_them_all - function returns the sum of all its parameters
 * @n: the function's first argument, an integer
 * Return: an integer that is is the sum of arguments or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* defines a variable of type va_list */

	unsigned int j; /* counter variable */
	unsigned int sum = 0; /* return variable */

	va_start(args, n);
	if (n == 0 || args == NULL) /* protect function func from 0 & null */
	{
		return (0);
	}
	for (j = 0; j < n; j++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
