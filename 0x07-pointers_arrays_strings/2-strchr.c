#include"holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer.
 * @c: character.
 * Return: result pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	while (*(s + i) && *(s + i) != c)
	{
		s++;
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	else
		return (0);
}
