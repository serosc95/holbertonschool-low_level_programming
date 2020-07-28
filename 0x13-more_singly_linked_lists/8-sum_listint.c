#include"lists.h"
/**
 * sum_listint - sum of all the data of the list.
 * @head: is the list.
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
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
