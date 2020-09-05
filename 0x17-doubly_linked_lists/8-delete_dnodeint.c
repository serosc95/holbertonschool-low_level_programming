#include"lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: is the list.
 * @index: is the index of the list.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *aux2;
	unsigned int i;

	if (!head)
		return (-1);
	aux = *head;
	if (!aux)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head)->next)
			((*head)->next)->prev = NULL;
		free(aux);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (aux)
			aux = aux->next;
		else
			return (-1);
	}
	if (!aux->next)
		return (-1);
	aux2 = aux;
	aux = aux->next;
	(aux->next)->prev = aux2;
	aux2->next = aux->next;
	free(aux);
	return (1);
}
