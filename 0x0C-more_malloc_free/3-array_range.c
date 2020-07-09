#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range -  creates an array of integers.
 * @min: integer.
 * @max: integer.
 * Return: pointer integer.
 */
int *array_range(int min, int max)
{
	int *s, i, size;

	if (min > max)
		return (NULL);
	size = 1 + max - min;
	s = malloc(size * sizeof(int));
	if (s != NULL)
	{
		for (i = 0; i < size; i++, min++)
			s[i] = min;
		return (s);
	}
	return (NULL);
}
