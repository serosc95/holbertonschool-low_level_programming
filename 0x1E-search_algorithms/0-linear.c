#include "search_algos.h"
/**
 * linear_search - searches with Linear search algorithm
 * @array: array to search element
 * @size: number of elements
 * @value: value to search
 * Return: index or -1 if array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
