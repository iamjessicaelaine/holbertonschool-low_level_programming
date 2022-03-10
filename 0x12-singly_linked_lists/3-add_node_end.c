#include <string.h>
#include "lists.h"

int _strlen(char *s);

/**
 * add_node_end - adds a new node at the end of  list_t list
 * @head: points to the pointer of the linked list
 * @string: const. char pointer to string which will be dup'd &
 * added to list_t list
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *string)
{
	list_t *new_node;
	list_t *headprotect = *head; /* pointer to iterated thru linked list */
	char *newstring = strdup(string); /* duplicates string & mallocs
					   * newstring
					   */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || newstring == NULL)
	{
		free(new_node);
		free(newstring);
		return (NULL);
	}
	new_node->str = newstring;
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (headprotect->next != NULL)
	{
		headprotect = headprotect->next;
	}
	headprotect->next = new_node;
	return (new_node);
}

/**
 * _strlen  -  returns the length of a string
 * @s: s is a string
 * Return: return length of string for success
*/

int _strlen(char *s)
{
	int purp = 0;

	while (*s != '\0')
	{
		purp++;
		s++;
	}
	return (purp);
}
