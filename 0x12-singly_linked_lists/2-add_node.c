#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to linked list
 * @string: char pointer to new element
 * Return: the address of a the new element or NULL for failure
 */

list_t *add_node(list_t **head, const char *string)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(string);
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
