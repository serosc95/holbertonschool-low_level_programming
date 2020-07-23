#include"lists.h"
/**
 * print_list - print the list values.
 * @h: is the list to print.
 * Return: the number nodes.
 */
size_t print_list(const list_t *h)
{
	size_t countlist = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		countlist++;
		h = h->next;
	}
	return (countlist);
}
