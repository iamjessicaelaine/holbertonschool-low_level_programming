#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * delete_dnodeint_at_index - deletes node at given index of doubly linked list
 * @head: reference (pointer to pointer) to head of doubly linked list
 * @index: index of node that should be deleted. Index starts at 0
 * Return: 1 for success, -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (temp == NULL || (*head) == NULL) /* can't funct on an empty list */
	{
		return (-1);
	}
	while (count < index) /* traverse list until index */
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			return (-1);
		}
	}
	if (index == 0) /* we're at index of list */
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		*head = temp->next;
	}
	else
	{
		if (temp->next)
		{
			temp->next->prev = temp->prev;
		}
		if (temp->prev)
		{
			temp->prev->next = temp->next;
		}
	}
	free(temp);
	return (1);
}
