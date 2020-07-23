#include"lists.h"
/**
 * list_len - number of elements in a linked list.
 * @h: is the list.
 * Return: the number nodes.
 */
size_t list_len(const list_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		countlist++;
		h = h->next;
	}
	return (countlist);
}
