#include"function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - executes a function given as a parameter.
 * @array: array.
 * @size: size of array.
 * @action: function pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
