#include "hash_tables.h"
/**
 * hash_table_create - create hash table.
 * @size: is size of table.
 * Return: a table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_table;
	unsigned long int index;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	node_table = malloc(sizeof(hash_node_t *) * size);
	if (node_table == NULL)
	{
		free(table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		node_table[index] = NULL;
	table->size = size;
	table->array = node_table;
	return (table);
}

