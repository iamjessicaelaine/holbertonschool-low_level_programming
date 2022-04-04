#include "lists.h"

/**
 * dlistint_len - returns the number of elements in doubly linked list
 * @head: pointer to doubly linked list
 * Return: # number of elements in doubly linked list
 */

size_t dlistint_len(const dlistint_t *head)
{
	unsigned int nodecount = 0;
	/* declare traversing pointer & set it to start of list */
	const dlistint_t *current = head;

	/* start loop that will traverse through list until the end */
	while (current != NULL)
	{
		nodecount++;
		current = current->next;
	}
	return (nodecount);
}
