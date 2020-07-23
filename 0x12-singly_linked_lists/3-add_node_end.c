#include"lists.h"
/**
 * add_node_end - adds a new node at the end of the list.
 * @head: is the new node to add to the list.
 * @str: string inside the node.
 * Return: list of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist, *aux;
	unsigned int i = 0;

	if (!str)
		return (NULL);
	newlist = malloc(sizeof(list_t));
	if (newlist)
	{
		newlist->str = strdup(str);
		if (!newlist->str)
		{
			free(newlist);
			return (NULL);
		}
		while (newlist->str[i])
			i++;
		newlist->len = i;
		newlist->next = NULL;
		if (!*head)
		{
			*head = newlist;
			return (newlist);
		}
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = newlist;
		return (newlist);
	}
	return (NULL);
}
