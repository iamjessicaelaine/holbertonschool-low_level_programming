#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: points to an integer array to be func'd up
 * @size: the size of the array
 * @action: pointer to the function that will func up array's elements
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int j = 0; /* counter variable for array */

	if (array && size && action) /* protects function's func from NULL */
		while (j < size) /* loop to access ea. element so it's func'd */
		{
			action(array[j]);
			j++;
 		}
}
