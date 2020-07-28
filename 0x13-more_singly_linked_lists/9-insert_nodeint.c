
#include"lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: is the list.
 * @idx: is the index of the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *newlist;
	unsigned int i;

	if (!head)
		return (NULL);
	newlist = malloc(sizeof(listint_t));
	if (!newlist)
		return (NULL);
	newlist->n = n;
	if (idx == 0)
	{
		newlist->next = *head;
		*head = newlist;
		return (newlist);
	}
	aux = *head;
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
	aux->next = newlist;
	return (newlist);
}
