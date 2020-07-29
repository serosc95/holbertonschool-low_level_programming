#include"lists.h"
/**
 * print_listint_safe - print a list.
 * @head: is the list.
 * Return: the number nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size;
	int cmp;

	if (!head)
		exit(98);
	for (size = 0; head; size++)
	{
		cmp = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (cmp > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			size++;
			break;
		}
	}
	return (size);
}
