#include <stdlib.h>
#include "main.h"

int _strlen(char *s);

/**
 * str_concat - concatenates two strings and dynamically allocates its memory
 * @s1: the leading string
 * @s2: the string to follow
 * Return: a pointer to a newly allocagtd space in memory that contains s1 & s2
 * or NULL on failure of memory allocation
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *j; /* this is the pointer to the two concatenated strings */

	if (s1 == NULL) /* if statements deciding what to do with null s1 & s2*/
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	/* dynamically allocate memory for the two concatenated strings */
	j = malloc(_strlen(s1) + _strlen(s2) + 1);

	/* if memory cannot be allocated return null for failure */
	if (j == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		j[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		j[i] = *s2;
		s2++;
		i++;
	}
	return (j);
}

/**
 * _strlen  -  returns the length of a string
 * @s: s is a string
 * Return: return length of string for success
*/

int _strlen(char *s)
{
	int purp = 0;

	while (*s != '\0')
	{
		purp++;
		s++;
	}
	return (purp);
}

