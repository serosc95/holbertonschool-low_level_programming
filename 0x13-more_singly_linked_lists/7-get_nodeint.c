#include"lists.h"
/**
 * get_nodeint_at_index - get node at index.
 * @head: is the list.
 * @index: index of the node.
 * Return: the nth node of a list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i;

	if (!head)
		return (0);
	aux = head;
	for (i = 0; i < index; i++)
	{
		if (aux)
			aux = aux->next;
		else
			return (NULL);
	}
	return (aux);
}
