#include"lists.h"
/**
 * print_dlistint - print the list values.
 * @h: is the list to print.
 * Return: the number nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		printf("%d\n", h->n);
		countlist++;
		h = h->next;
	}
	return (countlist);
}
