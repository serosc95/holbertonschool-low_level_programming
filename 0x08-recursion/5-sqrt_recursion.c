#include"holberton.h"
/**
 * _sqrt - natural square root of a number.
 * @n: integer.
 * @x: integer.
 * Return: number integer.
 */
int _sqrt(int n, int x)
{
	int aux;

	if (x * x < n)
	{
		aux = _sqrt(n, x + 1);
		return (aux);
	}
	else if (x * x == n)
		return (x);
	return (-1);
}
/**
 * _sqrt_recursion - natural square root of a number.
 * @n: integer.
 * Return: number integer.
 */
int _sqrt_recursion(int n)
{
	int aux;

	if (n > 0)
	{
		aux = _sqrt(n, 1);
		return (aux);
	}
	else if (n < 0)
		return (-1);
	return (1);
}
