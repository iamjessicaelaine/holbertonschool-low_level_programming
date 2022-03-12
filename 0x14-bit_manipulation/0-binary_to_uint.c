#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars (aka a binary number)
 * Return: the converted number, or 0 if there is one or more chars in
 * the string that is not 0 or 1, and also if the string is empty (NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0; /* holds the converted number */
	int j = 0; /* helps move through string */

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] == '0' || b[j] == '1')
	{
		converted <<= 1;
		converted += b[j] - '0';
		j++;
		if (b[j] >= '2')
		{
			return (0);
		}

	}
	return (converted);
}
