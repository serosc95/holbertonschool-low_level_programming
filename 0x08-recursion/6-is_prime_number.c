#include"holberton.h"
/**
 * number_prime - detect prime numbers.
 * @n: integer.
 * @a: integer.
 * Return: number integer.
 */
int number_prime(int n, int a)
{
	int aux;

	if (a < n)
	{
		if (n % a != 0)
		{
			aux = number_prime(n, a + 1);
			return (aux);
		}
		else
		{
			return (0);
		}
	}
	else
		return (1);
}
/**
 * is_prime_number - detect prime numbers.
 * @n: integer.
 * Return: number integer.
 */
int is_prime_number(int n)
{
	int aux;

	if (n > 1)
	{
		aux = number_prime(n, 2);
		return (aux);
	}
	else
		return (0);
}
