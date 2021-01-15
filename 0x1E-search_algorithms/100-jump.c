#include "search_algos.h"
/**
 * jump_search - searches with Linear search algorithm
 * @array: array to search element
 * @size: number of elements
 * @value: value to search
 * Return: index or -1 if array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = sqrt(size), inicio = 0, min;

	min = (i <= size) ? i : size;
	if (array == NULL)
		return (-1);
	while (array[min] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", inicio, array[inicio]);
		inicio = i;
		i += sqrt(size);
		if (inicio >= size)
			return (-1);
		if (i >= size)
			break;
		min = (i <= size) ? i : size;
	}
	printf("Value checked array[%ld] = [%d]\n", inicio, array[inicio]);
	printf("Value found between indexes [%ld] and [%ld]\n", inicio, i);
	for (; array[inicio] < value; inicio++)
	{
		min = (i <= size) ? i : size;
		if (inicio == min)
			return (-1);
		printf("Value checked array [%ld] = [%d]\n", inicio, array[inicio]);
	}
	if (array[inicio] == value)
	{
		printf("Value checked array [%ld] = [%d]\n", inicio, array[inicio]);
		return (inicio);
	}
	return (-1);
}
