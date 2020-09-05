#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: is the list.
 * @idx: is the index of the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *newlist;
	unsigned int i;

	if (!h)
		return (NULL);
	newlist = malloc(sizeof(dlistint_t));
	if (!newlist)
		return (NULL);
	newlist->n = n;
	if (idx == 0)
	{
		newlist->prev = NULL;
		newlist->next = *h;
		*h = newlist;
		return (newlist);
	}
	aux = *h;
	for (i = 0; i < (idx - 1); i++)
	{
		if (aux)
			aux = aux->next;
		else
		{
			free(newlist);
			return (NULL);
		}
	}
	newlist->next = aux->next;
	newlist->prev = aux;
	aux->next = newlist;
	return (newlist);
}
