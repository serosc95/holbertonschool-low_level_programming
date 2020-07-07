#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: pointer.
 * @s2: pointer.
 * Return: string pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int count = 0, i, j;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (s1[count] != '\0')
		count++;
	while (s2[count] != '\0')
		count++;
	s = (char *)malloc(count * sizeof(char));
	if (s != '\0')
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
			s[i] = s2[j];
		return (s);
	}
	return ('\0');
}
