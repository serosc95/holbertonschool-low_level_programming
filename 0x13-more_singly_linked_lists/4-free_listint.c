#include"lists.h"
/**
 * free_listint - frees a list.
 * @head: is the list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
