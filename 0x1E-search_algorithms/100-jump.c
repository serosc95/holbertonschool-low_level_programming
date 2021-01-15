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
	size_t i = 0, inicio = 0, min;

	if (array == NULL || size == 0)
		return (-1);
	while (array[i] < value && i < size)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		inicio = i;
		i += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", inicio, i);
	min = i < size - 1 ? i : size - 1;
	for (; array[inicio] < value && inicio < min; inicio++)
		printf("Value checked array [%ld] = [%d]\n", inicio, array[inicio]);
	printf("Value checked array [%ld] = [%d]\n", inicio, array[inicio]);
	if (array[inicio] == value)
		return (inicio);
	return (-1);
}
