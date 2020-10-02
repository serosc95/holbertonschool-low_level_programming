#include "hash_tables.h"
/**
 * add_node - adds a new node at the beginning of the list.
 * @head: is the new node to add to the list.
 * @key: hash number.
 * @value: data value.
 * Return: list of nodes.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newlist, *aux;

	aux = *head;
	while (aux)
	{
		if (strcmp(key, aux->key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (*head);
		}
		aux = aux->next;
	}
	newlist = malloc(sizeof(hash_node_t));
	if (newlist)
	{
		newlist->key = strdup(key);
		newlist->value = strdup(value);
		newlist->next = *head;
		*head = newlist;
		return (newlist);
	}
	return (NULL);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the table.
 * @key: hash number.
 * @value: data value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int index;

	if (!key || !ht || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	newnode = add_node(&(ht->array[index]), key, value);
	if (!newnode)
		return (0);
	ht->array[index] = newnode;
	return (1);
}
