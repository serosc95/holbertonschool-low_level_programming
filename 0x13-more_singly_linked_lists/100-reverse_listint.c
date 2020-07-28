#include"lists.h"
/**
 * reverse_listint - reverses a list.
 * @head: is the list.
 * Return: the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *aux2 = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		aux = (*head)->next;
		(*head)->next = aux2;
		aux2 = *head;
		*head = aux;
	}
	*head = aux2;
	return (*head);
}
