#include"holberton.h"
#include<stdio.h>
/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer.
 *
 * Return: result entero.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char working = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			working = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (working)
				break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
}
/**
 * main - multiplies two numbers.
 * @argc: integer.
 * @argv: pointer array.
 * Return: integer zero.
 */
int main(int argc, char *argv[])
{
	int aux = 0, i, j, verificar = 0;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; s[j] != '\0'; j++)
			{
				if (s[j] < '0' || s[j] > '9')
					verificar = 1;
			}
			if (verificar != 0)
			{
				printf("Error\n");
				break;
			}
			aux += _atoi(s);
		}
		if (verificar == 0)
			printf("%d\n", aux);
	}
	else
		printf("0\n");
	return (0);
}
