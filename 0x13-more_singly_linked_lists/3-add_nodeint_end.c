#include"lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @head: is the new node to add to the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist, *aux;

	newlist = malloc(sizeof(listint_t));
	if (newlist)
	{
		newlist->n = n;
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
