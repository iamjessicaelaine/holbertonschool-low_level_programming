#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the linked list
 * @index: the index of the node, starting at 0
 * Return: the retrieved node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head; /* protects head pointer and keeps
				    * keeps track of iteration.
				    */
	unsigned int count = 0; /* the index of the node we're looking at */
	listint_t *retrieved; /* pointer to the lucky nth node */

	while (current != NULL) /* begin iterating through a non-empty
				 * linked list until you get to the end.
				 */
	{
		if (count == index) /* but first if the variable that is used to
				     * to help me identify what node I'm looking
				     * at is equal to the variable that tells me
				     * what node I am looking for I need some
				     *things done..
				     */
		{
			retrieved = current; /* store the address of the node in
					      * in my pointer that will hold the
					      * specific node we're looking for.
					      */
			return (retrieved); /* and end the loop & function by
					     * returning that address.
					     */
		}
		count++; /* otherwise (if the count doesn't equal index) then
			  * increment my variable that keeps track of which node
			  * I'm currently at by 1...
			  */
		current = current->next; /* and also move my pointer that helps
					  * me keep track of where I'm at in the
					  * in the linked list to the next node.
					  * Because I used a while loop, the
					  * process repeats until we get to the
					  * end of the linked list (when current
					  * points to NULL) or until my count
					  * variable has caught up with the
					  * index and we can return the retrievd
					  * pointer to the specific node we seek
					  */
	}
	return (NULL); /* if all else fails...return null. */
}
