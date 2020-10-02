#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the table.
 * @key: hash number.
 * Return: associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
