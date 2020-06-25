#include"holberton.h"
/**
 * string_toupper - rchanges all lowercase letters of a string to uppercase.
 * @s: pointer.
 * Return: string pointer.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
