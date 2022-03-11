#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: points to the linked list
 * Return: the sum of all data (n) in list or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head; /* pointer to keep track of iteration */
	int sum = 0; /* variable to hold the summation of each node as we go
		  * through the list.
		  */

	if (current == NULL) /* if the list is empty */
	{
		return (0);
	} /* otherwise... */
	while (current != NULL) /*begin iterating through list */
	{
		sum += current->n;
		current = current->next;
	} /* once we get to the end of the linked list */
	return (sum);
}
