#include"lists.h"
/**
 * free_list - frees a list.
 * @head: is the list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
