#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of doubly linked list
 * @head: pointer to the pointer of the doubly linked list
 * @newint: integer node to be inserted
 * Return: address of new element or null if insertion fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int newint)
{
	dlistint_t *new_node; /* declare new node */

	new_node = malloc(sizeof(dlistint_t)); /* alloc. mem. for new node */
	if (new_node == NULL) /* account for malloc failure */
	{
		free(new_node); /* no memory leaks wanted */
		return (NULL);
	}
	/* assign data and set pointers of new node to replace og 1st node */
	new_node->n = newint;
	new_node->prev = NULL;
	new_node->next = *head;
	/* set original head node to follow behind new head node */
	if ((*head) != NULL)
	{
		/* if list is empty new node still inserted */
		(*head)->prev = new_node;
	}
	/* set head of list to new node */
	*head = new_node;
	return (new_node);
}
