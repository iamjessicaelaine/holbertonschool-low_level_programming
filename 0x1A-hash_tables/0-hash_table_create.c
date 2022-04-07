#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table, or NULL for failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int j;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
	{
		free(newtable);
		return (NULL);
	}
	newtable->size = size;
	newtable->array = calloc(newtable->size, sizeof(hash_node_t));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	for (j = 0; j < newtable->size; j++)
	{
		newtable->array[j] = NULL; /* set items 2 NULL since, unused yet */
	}
	return (newtable);
}
