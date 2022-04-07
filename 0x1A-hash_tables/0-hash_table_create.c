#include "hash_tables.h"
#include "string.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table, or NULL for failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	/* unsigned long int j; */

	if (size < 1)
	{
		return (NULL);
	}
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		return (NULL);
	}
	newtable->size = size;
	newtable->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	/* memset(newtable->array, 0, size * sizeof(hash_node_t)); */
	return (newtable);
}
