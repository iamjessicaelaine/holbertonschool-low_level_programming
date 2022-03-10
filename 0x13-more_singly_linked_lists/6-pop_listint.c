#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to the pointer of linked list
 * Return: the head node's data (n) unless list is empty then 0
 */

int pop_listint(listint_t **head)
{
	int retval; /* variable to store head node's data */
	listint_t *next_node; /* keeps track of progress */

	if (*head == NULL)
	{
		return (0);
	}
	next_node = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = next_node;
	return (retval);
}
