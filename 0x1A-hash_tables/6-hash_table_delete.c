#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: is the table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node , *aux;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
            aux = node->next;
            free(node->key);
            free(node->value);
            free(node);
			node = aux;
		}
	}
    free(ht->array);
	free(ht);
}
