#include"lists.h"
/**
 * free_dlistint - frees a list.
 * @head: is the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
