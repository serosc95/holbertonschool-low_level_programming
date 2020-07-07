#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid -  pointer to a 2 dimensional of integers.
 * @width: integer.
 * @height: integer.
 * Return: string pointer.
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	if (width == '\0' || height == '\0')
		return ('\0');
	s = malloc(height * sizeof(int *));
	if (s != '\0')
	{
		for (i = 0; i < height; i++)
		{
			s[i] = malloc(width * sizeof(int));
			if (s[i] == '\0')
			{
				for (; i >= 0; i--)
					free(s[i]);
				free(s);
				return ('\0');
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				s[i][j] = 0;
		return (s);
	}
	return ('\0');
}
