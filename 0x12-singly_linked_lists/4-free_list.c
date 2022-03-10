#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: points to the linked list awaiting freedom
 * Return: is void
 */

void free_list(list_t *head)
{
	list_t *freedom; /* used to iterate thru linked list while
			  * protecting the head pointer.
			  */
	while (head != NULL)
	{
		freedom = head->next;
		free(head->str);
		free(head);
		head = freedom;
	}
}
