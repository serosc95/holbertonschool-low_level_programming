#include"lists.h"
/**
 * free_listint2 - frees a list.
 * @head: is the list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	*head = NULL;
}
