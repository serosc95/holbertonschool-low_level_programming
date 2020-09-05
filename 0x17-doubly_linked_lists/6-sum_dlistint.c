#include"lists.h"
/**
 * sum_dlistint - sum of all the data of the list.
 * @head: is the list.
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int sum = 0;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
