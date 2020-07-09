#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer.
 * @s2: pointer.
 * @n: integer.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	s = malloc((i + n + 1) * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; j < n; j++, i++)
			s[i] = s2[j];
		s[i] = '\0';
		return (s);
	}
	return ('\0');
}
