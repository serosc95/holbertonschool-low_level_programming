#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using.
 * @ptr: pointer.
 * @old_size: integer.
 * @new_size: integer.
 * Return: void.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *p = ptr;
	unsigned int i, aux;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	s = malloc(new_size);
	if (s != NULL)
	{
		if (new_size > old_size)
			aux = old_size;
		for (i = 0; i < aux; i++)
			s[i] = p[i];
		free(ptr);
		return (s);
	}
	return (NULL);
}
