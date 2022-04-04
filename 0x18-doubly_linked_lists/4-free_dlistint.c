#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: points to doubly linked list awaiting freedom
 * Return: is void (and perhaps that is beauty of freedom #packlight)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freedom; /* helps free elements whle protecting head */

	while (head != NULL) /* cuz ya can't free an empty list */
	{
		freedom = head; /* temp assign freedom to head */
		head = head->next; /* this moves us to thru list node by node */
		free(freedom); /* frees each node upon arrival while protecting
				* the head.
				*/
	}
}
