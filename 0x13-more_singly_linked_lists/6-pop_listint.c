#include"lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: is the list.
 * Return: the head node data n.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int index;

	if (!head)
		return (0);
	if (*head)
	{
		aux = *head;
		index = (*head)->n;
		*head = (*head)->next;
		free(aux);
		return (index);
	}
	return (0);
}
