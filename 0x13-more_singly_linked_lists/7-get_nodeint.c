#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the linked list
 * @index: the index of the node, starting at 0
 * Return: the retrieved node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;/* pointer to keep track of iteration */
	listint_t *quickie; /* pointer to nth node */
	unsigned int count = 0; /* variable to help me get to the nth node */

	if (!index || head == NULL)
	{
		return (NULL);
	}
	while (current != NULL && count < index - 1)
	{
		count++;
		current = current->next;
	}
	quickie = current->next;
	return (quickie);
}
