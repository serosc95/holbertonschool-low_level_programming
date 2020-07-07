#include"holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: integer.
 * @c: character.
 * Return: string.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return ('\0');
	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
