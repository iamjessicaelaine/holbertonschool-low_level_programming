#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the linked list
 * @index: the index of the node, starting at 0
 * Return: the retrieved node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head; /* protects head pointer and keeps
				    * keeps track of iteration.
				    */
	unsigned int count = 0; /* the index of the node we're looking at */
	listint_t *retrieved; /* pointer to the lucky nth node */

	while (current != NULL)
	{
		if (count == index)
		{
			retrieved = current;
			return (retrieved);
		}
		count++;
		current = current->next;
	}
	return (NULL); /* if all else fails...return null. */
}
