#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @head: points to doubly linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *head)
{
	unsigned int nodecount = 0;
	/* declare traversing pointer and start at beginning of list */
	const dlistint_t *current = head;

	while (current != NULL)
	{
		nodecount++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (nodecount);
}
