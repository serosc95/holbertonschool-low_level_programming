#include"function_pointers.h"
#include<stdlib.h>
/**
 * int_index - executes a function given as a parameter.
 * @array: array.
 * @size: size of array.
 * @cmp: function pointer.
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, aux = 0;

	if (array && cmp && size >= 0)
	{
		for (i = 0; i < size; i++)
		{
			aux = cmp(array[i]);
			if (aux)
				return (i);
		}
	}
	return (-1);
}
