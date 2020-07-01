#include"holberton.h"
/**
 * factorial - factorial of a given number.
 * @n: integer.
 * Return: number integer.
 */
int factorial(int n)
{
	int aux;

	if (n > 1)
	{
		aux = factorial(n - 1);
		return (n * aux);
	}
	else if (n < 0)
		return (-1);
	return (1);
}
