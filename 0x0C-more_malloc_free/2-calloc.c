#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: integer.
 * @size: integer.
 * Return: void.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			s[i] = 0;
		return (s);
	}
	return (NULL);
}
