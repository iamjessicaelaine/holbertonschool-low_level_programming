#include "variadic_functions.h"

/**
 * print_strings - function prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* declares list variable for arguments */

	unsigned int j = 0; /* initialized counter variable */
	char *string; /* char pointer to strings in arg list */

	va_start(args, n); /* begin access to variable list args
			    * for function that begins after parameter
			    * last required parameter n.
			    */
	while (j < n)
	{
		string = va_arg(args, char *); /* initializes char pointer to first
					       * character array (string) found
					       * in list of arguments
					       */
		if (string == NULL) /* handles condition of null string req. */
		{
			printf("(nil)");
		}
		else /* if string isn't null, then print string to stdout */
		{
		printf("%s", string);
		}
		j++; /* continue moving to next argument in list */
		if (separator != NULL && j <= (n - 1)) /* telling function what
							* to do with separator.
							* count needs to be less
							* than 1 since separator
							* only prints between
							* strings.
							*/
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args); /* lets the function know no more need to access arg list
		       * it can release the memory it has been holding for it
		       */
}
