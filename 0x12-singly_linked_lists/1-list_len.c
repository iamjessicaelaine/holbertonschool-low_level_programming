#include "lists.h"

/**
 * list_len - returns the number of elements in linked list_t list
 * @head: points to the linked list list_t
 * Returns: the number of elements in linked list_t list
 */

size_t list_len(const list_t *head)
{
	size_t count = 0;
	const list_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
