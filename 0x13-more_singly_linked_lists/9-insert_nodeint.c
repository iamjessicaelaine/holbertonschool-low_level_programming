#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of listint_t linked list
 * @idx: the index of the list where the new node should be added, stars at 0
 * @new: integer that holds value of new node
 * Return: the address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int new)
{
	listint_t *current = *head; /* dereferences & helps iteration */
	listint_t *new_node; /* pointer to address of new node */
	unsigned int count = 0; /* keeps track of index in iteration */

	new_node = malloc(sizeof(listint_t)); /* allocate space for new node */
	if (new_node == NULL) /* if malloc fails... */
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = new; /* create & give value to new node */
	while (current != NULL) /*start traversing list */
	{
		if (count == idx - 1) /* if/when count reaches idx */
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node); /* return address of new node */
		} /* otherwise */
		count++;
		current = current->next;
	}
	return (NULL);
}
