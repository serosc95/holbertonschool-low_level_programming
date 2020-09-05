#include"lists.h"
/**
 * dlistint_len - list length.
 * @h: is the list.
 * Return: the number nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		countlist++;
		h = h->next;
	}
	return (countlist);
}
