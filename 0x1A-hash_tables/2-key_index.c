#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: is the key.
 * @size: is size of table.
 * Return: index of the table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}

