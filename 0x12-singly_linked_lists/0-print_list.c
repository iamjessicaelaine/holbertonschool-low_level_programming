#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @head: pointer to list_t list (points to first element of the list)
 * Return: the number of nodes
 */

size_t print_list(const list_t *head)
{
	size_t count = 0; /* variable to keep track of # of nodes. intialized */
	const list_t *current = head;  /* pointer that keeps track of the
			  * node we are currenlty printing.
			  */
	char *string; /* variable to hold string element */
	unsigned int length; /* variable to hold length of string element */

	while (current != NULL)
	{
		count++;
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			current = current->next;
		}
		string = current->str;
		length = current->len;
		printf("[%u] %s\n", length, string);
		current = current->next;
	}
	return (count);
}
