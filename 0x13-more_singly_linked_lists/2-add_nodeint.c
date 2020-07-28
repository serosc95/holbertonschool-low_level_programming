#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list.
 * @head: is the new node to add to the list.
 * @n: integer inside the node.
 * Return: list of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));
	if (newlist)
	{
		newlist->n = n;
		newlist->next = *head;
		*head = newlist;
		return (newlist);
	}
	return (NULL);
}
