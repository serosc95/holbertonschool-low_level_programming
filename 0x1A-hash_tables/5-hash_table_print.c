#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *aux = "";

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': '%s'", aux, node->key, node->value);
			aux = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
