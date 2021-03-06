#include"lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the list.
 * @head: is the new node to add to the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newlist;

	newlist = malloc(sizeof(dlistint_t));
	if (newlist)
	{
		newlist->n = n;
		newlist->prev = NULL;
		if (!*head)
		{
			newlist->next = NULL;
			*head = newlist;
			return (newlist);
		}
		while ((*head)->prev)
			*head = (*head)->prev;
		(*head)->prev = newlist;
		newlist->next = *head;
		*head = newlist;
		return (newlist);
	}
	return (NULL);
}
