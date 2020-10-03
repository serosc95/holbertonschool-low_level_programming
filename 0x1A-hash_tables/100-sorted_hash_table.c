#include "hash_tables.h"
/**
 * shash_table_create - create hash table ordered.
 * @size: is size of table.
 * Return: a table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **node_table;
	unsigned long int index;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	node_table = malloc(sizeof(shash_node_t *) * size);
	if (node_table == NULL)
	{
		free(table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		node_table[index] = NULL;
	table->size = size;
	table->array = node_table;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - adds an element to the hash table odered.
 * @ht: is the table.
 * @key: hash number.
 * @value: data value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnode;
	unsigned long int index;

	if (!key || !ht || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	newnode = sadd_node(&(ht->array[index]), key, value);
	if (!newnode)
		return (0);
	ht->array[index] = newnode;
	if (!ht->shead)
	{
		ht->shead = newnode;
		ht->stail = newnode;
	}
	else
		ord_node(ht, newnode);
	return (1);
}

/**
 * sadd_node - adds a new node at the beginning of the list.
 * @ht: is the new node to add to the list.
 * @key: hash number.
 * @value: data value.
 * Return: list of nodes.
 */
shash_node_t *sadd_node(shash_node_t **ht, const char *key, const char *value)
{
	shash_node_t *newlist, *aux;

	aux = *ht;
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (*ht);
		}
		aux = aux->next;
	}
	newlist = malloc(sizeof(shash_node_t));
	if (newlist)
	{
		newlist->key = strdup(key);
		newlist->value = strdup(value);
		newlist->sprev = NULL;
		newlist->snext = NULL;
		newlist->next = *ht;
		*ht = newlist;
		return (newlist);
	}
	return (NULL);
}

/**
 * ord_node - adds a new node at the beginning of the list.
 * @head: is the table.
 * @node: is the node.
 */
void ord_node(shash_table_t *head, shash_node_t *node)
{
	shash_node_t *aux, *prev;

	if (strcmp(head->shead->key, node->key) > 0)
	{
		node->snext = head->shead;
		head->shead->sprev = node;
		head->shead = node;
	}
	else
	{
		aux = head->shead;
		while (aux != NULL)
		{
			prev = aux->sprev;
			if (strcmp(aux->key, node->key) > 0)
			{
				prev->snext = node;
				aux->sprev = node;
				node->snext = aux;
				node->sprev = prev;
				return;
			}
			prev = aux;
			aux = aux->snext;
		}
		prev->snext = node;
		node->sprev = prev;
		head->stail = node;
	}
}

/**
 * shash_table_print - prints a hash table ordered.
 * @ht: is the table.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;
	char *aux = "";

	if (!ht)
		return;
	node = ht->shead;
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
