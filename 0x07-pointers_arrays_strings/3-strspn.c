#include"holberton.h"
/**
 * _strspn - lgets the length of a prefix substring.
 * @s: pointer.
 * @accept: pointer.
 * Return: result integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int contador = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				contador++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (contador);
		}
	return (0);
}
