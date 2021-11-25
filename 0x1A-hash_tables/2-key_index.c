#include "hash_tables.h"
/**
 *key_index - function that gives you the index of a key.
 *@key: is the key
 *@size: s the size of the array of the hash table
 *Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int kei;

	kei = hash_djb2(key);
	index = kei % size;
	return (index);
}