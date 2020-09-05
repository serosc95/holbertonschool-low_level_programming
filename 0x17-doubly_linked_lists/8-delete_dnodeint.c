#include"lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: is the list.
 * @index: is the index of the list.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i;

	if (!head)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		if (*head)
			(aux->next)->prev = NULL;
		free(aux);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (aux)
			aux = aux->next;
		else
			return (-1);
	}
	if (aux->next && aux->prev)
	{
		(aux->next)->prev = aux->prev;
		(aux->prev)->next = aux->next;
	}
	else if (aux->prev)
		(aux->prev)->next = NULL;
	free(aux);
	return (1);
}
