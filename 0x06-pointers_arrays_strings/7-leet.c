#include"holberton.h"
/**
 * leet - encodes a string.
 * @s: pointer.
 * Return: string pointer.
 */
char *leet(char *s)
{
	int i, j;
	char letras[] = "aeotlAEOTL";
	char numbers[] = {'4', '3', '0', '7', '1',
				'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letras[j] != '\0'; j++)
			if (s[i] == letras[j])
				s[i] = numbers[j];
	return (s);
}
