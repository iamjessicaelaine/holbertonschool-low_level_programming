#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list_int list
 * @head: points to listint_t list, a singly linked list
 * Return: the number of nodes in printed singly linked list
 */

size_t print_listint(const listint_t *head)
{
	unsigned int nodecount = 0; /* initialization & declaration of variable
				     * that counts nodes as linked list is
				     * traversed.
				     */
	const listint_t *current = head; /* pointer that helps us traverse the
					  * list being set to the beginning of
					  * the linked list.
					  */
	while (current != NULL) /* loop that allows us to traverse the list w/ a
				 * condition that protects  against an from
				 * empty list.
				 */
	{
		nodecount++; /* count the node after each loop iteration */
		printf("%d\n", current->n); /* sets current ptr to 1st node */
		current = current->next; /* sets current ptr to the next node */
	}
	return (nodecount);
}
