#include "lists.h"

/**
 * get_dnodeint_at_index - goes and gets the nth node of a doubly linked list
 * @head: head pointer of the doubly linked list
 * @index: the index of the node, starting at 0
 * Return: value that's at nth node or NULL if node doesn't exist in list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head; /* copies head to temp ptr for protection */
	unsigned int search = 0; /* keeps track of index we're at */
	dlistint_t *retrieved; /* will store the node we're looking for */

	while (temp != NULL)
	{
		if (search == index) /* if/when we find what we seek */
		{
			retrieved = temp; /* copy the node we seek into return*/
			return (retrieved);
		}
		search++; /* increment search until we find what we seek */
		temp = temp->next; /* shift temp ptr to it's next which takes us
				    * through the list.
				    */
	}
	return (NULL); /* we only get to this statement if we loop through list
			* and search never equals the index we seek.
			*/
}
