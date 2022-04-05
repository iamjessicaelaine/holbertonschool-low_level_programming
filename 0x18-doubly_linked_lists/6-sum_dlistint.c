#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a DLL
 * @head: head pointer of DLL
 * Return: the sum of data in DLL or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head; /* copies head ptr to temp ptr for
				  * traversing & protection.
				  */
	int sum = 0; /* variable to hold summation of data */

	if (temp == NULL) /* if the list is empty */
	{
		return (0); /* cuz there's nothing to sum */
	} /* otherwise ... */
	while (temp != NULL) /* begin loop through DLL */
	{
		sum += temp->n; /* add the data (n) in each node */
		temp = temp->next; /* keep setting temp to next until end */
	} /* once we've traversed the whole DLL, return the sum */
	return (sum);
}
