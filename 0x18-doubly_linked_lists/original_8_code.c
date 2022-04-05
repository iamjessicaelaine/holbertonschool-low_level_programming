#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index of doubly linked list
 * @head: reference (pointer to pointer) to head of doubly linked list
 * @index: index of node that should be deleted. Index starts at 0
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* dlistint_t *temp = *head; copies & stores head for traver */
	unsigned int search = 0; /* keeps track & compares to index */
	dlistint_t *deletenode = NULL; /* will store node to be deleted when found */

	while ((*head) != NULL)
	{
		if (search == index)
		{
			*head = deletenode->next;
		}
		if (deletenode->next != NULL)
		{
			deletenode->next->prev = deletenode->prev;
		}
		if (deletenode->prev != NULL)
		{
			deletenode->prev->next = deletenode->next;
		}
		free(deletenode);
		return (1);
	}
	return (-1);
}
