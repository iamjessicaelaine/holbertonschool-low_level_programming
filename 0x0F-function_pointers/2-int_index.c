#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: points to the integer array to be searched by function
 * @size: the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function does
 * not return 0, or -1 if no element matches &/or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0; /* counter variable */
	int e; /* store return of cmp function */

	if (array && size && cmp) /* protect function from null & 0 */
		while (j < size) /* loop to perform cmp func on array */
		{
			j++;
			e = cmp(array[j]);
			if (e != 0)
				return (j);
		}
	return (-1);
}
