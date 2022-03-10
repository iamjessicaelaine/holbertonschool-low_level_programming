#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to the linked list awaiting freedom
 * Return: is void (maybe freedom is void)
 */

void free_listint(listint_t *head)
{
	listint_t *freedom; /* points to nodes needing to be freed while
			     * protecting link list head pointer.
			     */
	while (head != NULL)
	{
		freedom = head;
		head = head ->next;
		free(freedom);
	}
}
