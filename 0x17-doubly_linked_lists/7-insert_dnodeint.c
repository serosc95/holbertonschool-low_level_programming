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
	if (idx == 0)
		return (add_dnodeint(h, n));
	newlist = malloc(sizeof(dlistint_t));
	if (!newlist)
		return (NULL);
	newlist->n = n;
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
	if (!aux->next)
	{
		free(newlist);
		return (add_dnodeint_end(h, n));
	}
	newlist->next = aux->next;
	newlist->prev = aux;
	(aux->next)->prev = newlist;
	aux->next = newlist;
	return (newlist);
}
