#include"holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer.
 * @accept: pointer.
 * Return: result pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
			if (*s == accept[j])
				return (s);
	if (accept[j] == '\0')
		return (0);
	return (s);
}
