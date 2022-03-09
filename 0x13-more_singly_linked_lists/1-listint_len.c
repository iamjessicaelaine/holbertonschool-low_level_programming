#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list
 * @head: pointer to the linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *head)
{
	unsigned int count = 0; /* initialized variable to count elements */
	const listint_t *current = head; /* pointer to traverse linked list set
					  * to beginning of linked list
					  */
	while (current != NULL) /* loop to traverse the list until we reach the
				 * end of the list
				 */
	{
		count++; /* count variable will increment with each element
			  * accessed
			  */
		current = current->next; /* keeps traversing the list until node
					  * is NULL.
					  */
	}
	return (count);
}
