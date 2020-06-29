#include"holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer.
 * @accept: pointer.
 * Return: result pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	char *aux;

	for (; *s != '\0'; s++)
	{
		aux = accept;
		for (; *aux != '\0'; aux++)
			if (*s == *aux)
				return (s);
	}
	return (0);
}
