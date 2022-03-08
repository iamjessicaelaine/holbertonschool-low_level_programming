#include <string.h>
#include "lists.h"

int _strlen(char *s);

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
