#include"holberton.h"
/**
 * rot13 - encodes a string rot13.
 * @s: pointer.
 * Return: string pointer.
 */
char *rot13(char *s)
{
	int i, j;
	char letras1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letras2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; letras1[j] != '\0'; j++)
			if (s[i] == letras1[j])
				s[i] = letras2[j];
	return (s);
}
