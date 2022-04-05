#include "lists.h"

/**
 * print_dlistint_backward - prints all the elemnts of a DLL backward
 * @head: points to the head of DLL
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *head)
{
	unsigned int nodenumber = 0;
	const dlistint_t *temp = head; /*traverse list & protect head */

	if (temp == NULL) /* empty list, nothing to print so exit */
	{
		return (0);
	}
	/* traverse to end of list */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* move backwards thru list & print elements as you go */
	while (temp != NULL)
	{
		nodenumber++;
		printf("%d\n", temp->n);
		temp = temp->prev; /* use prev pointer to move backwards */
	}
	return (nodenumber);
}
