#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - allocated space in memory.
 * @str: pointer.
 * Return: string pointer.
 */
char *_strdup(char *str)
{
	char *s;
	int count = 0, i;

	if (str == '\0')
		return ('\0');
	while (str[count] != '\0')
		count++;
	count++;
	s = malloc(count * sizeof(char));
	if (s != '\0')
	{
		for (i = 0; i <= count; i++)
			s[i] = str[i];
		return (s);
	}
	return ('\0');
}
