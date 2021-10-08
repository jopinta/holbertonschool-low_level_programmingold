#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: is the hash table you want to look into
 *@key: is the key you are looking for
 *
 *Return:  value associated with the element, or NULL
 *
 *
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (!ht || !key)
		return (NULL);
index = key_index((unsigned char *)key, ht->size);
head = ht->array[index];

while (head)

{
	if (strcmp(head->key, key) == 0)
		return (head->value);
	head = head->next;
}
return (NULL);
}
