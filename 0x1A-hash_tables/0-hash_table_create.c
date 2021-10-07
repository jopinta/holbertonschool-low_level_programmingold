#include "hash_tables.h"

/**
 *hash_table_create - function tha creates a hash
 *
 *@size: size of array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	unsigned long int i;

	if (new_t == 0)
		return (NULL);
	new_t->size = size;

	new_t->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_t->array)
	{
	free(new_t);
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	new_t->array[i] = NULL;
	}
	return (new_t);
}
