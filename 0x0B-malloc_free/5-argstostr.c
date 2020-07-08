#include"holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments.
 * @ac: integer.
 * @av: double pointer.
 * Return: string pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0, length = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}

	s = malloc((length + ac + 1) * sizeof(char));

	if (s != '\0')
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				s[c++] =  av[i][j];
			}
			s[c++] = '\n';
		}
		s[c] = '\n';
		return (s);
	}
	return (NULL);
}
