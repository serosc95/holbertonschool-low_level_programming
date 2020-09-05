#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list.
 * @head: is the new node to add to the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newlist, *aux;

	newlist = malloc(sizeof(dlistint_t));
	if (newlist)
	{
		newlist->n = n;
		newlist->next = NULL;
		if (!*head)
		{
			newlist->prev = NULL;
			*head = newlist;
			return (newlist);
		}
        aux = *head;
		while (aux->next)
			aux = aux->next;
        newlist->prev = aux; 
		aux->next = newlist;
		return (newlist);
	}
	return (NULL);
}
