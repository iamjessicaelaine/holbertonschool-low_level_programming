#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list (DLL)
 * @head: a reference (pointer to pointer) to the  head node of a DLL
 * @newint: data to be stored in the new node
 * Return: the address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int newint)
{
	dlistint_t *new_node;
	dlistint_t *last = *head; /* storing head for later use traversing to
				   * end of list. represents last node in list
				   */

	/* allocate memory & check for failure of malloc */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* give new node some data */
	new_node->n = newint;
	/* since it'll be the last node, it's next node will be null */
	new_node->next = NULL;
	/* if LL empty, new node becomes the head (and not the tail, amen!) */
	if (*head == NULL)
	{
		new_node->prev = NULL; /* bc there is no node before the head */
		*head = new_node; /* put new node at the head */
		return (new_node);
	}
	/* otherwise traverse list until end */
	while (last->next != NULL)
	{
		last = last->next;
	}
	/* we're at last node after loop so change its next to new node */
	last->next = new_node;
	/* make the og last node become previous to new node */
	new_node->prev = last;
	return (new_node);
}
