#include"lists.h"
/**
 * listint_len - number of elements in a linked list.
 * @h: is the list.
 * Return: the number nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		countlist++;
		h = h->next;
	}
	return (countlist);
}
