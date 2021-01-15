#include "search_algos.h"
/**
 * interpolation_search - searches with Linear search algorithm
 * @array: array to search element
 * @size: number of elements
 * @value: value to search
 * Return: index or -1 if array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (array[h] != array[l] && value >= array[l] && value <= array[h])
	{
		mid = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			l = mid + 1;
		else if (value < array[mid])
			h = mid - 1;
		else
			return (mid);
	}
	if (value == array[l])
		return (l);
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
