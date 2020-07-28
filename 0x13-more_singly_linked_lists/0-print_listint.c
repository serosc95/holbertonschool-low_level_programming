#include"lists.h"
/**
 * print_listint - print the list values.
 * @h: is the list to print.
 * Return: the number nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		printf("d\n");
		h = h->next;
	}
	return (countlist);
}
