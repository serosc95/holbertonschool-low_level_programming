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
	int *s, i;

	if (min > max)
		return (NULL);
	s = malloc((1 + max - min) * sizeof(int));
	if (s != NULL)
	{
		for (i = 0; i < (1 + max - min); i++)
			s[i] = i;
		return (s);
	}
	return (NULL);
}
