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
	int aux;
	char *s;

	if (argc == 3)
	{
		s = argv[1];
		aux = _atoi(s);
		s = argv[2];
		printf("%d\n", aux * _atoi(s));
	}
	else
		printf("Error\n");
	return (0);
}
