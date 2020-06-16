#include"holberton.h"
/**
 * print_times_table - prints the n times table
 *
 * @n: number table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, aux;

	if (n > -1 && n < 15)
	for (a = 0; a < n + 1; a++)
	{
		for (b = 0; b <= n; b++)
		{
			aux = a * b;
			if (aux > 9)
			{
				if (aux > 99)
					_putchar((aux / 100) % 10 + '0');
				_putchar((aux / 10) % 10 + '0');
				_putchar((aux % 10) + '0');
			}
			else
				_putchar(aux + '0');
			if (b < n)
			{
			_putchar(',');
			_putchar(' ');
			if (a * (b + 1) < 10)
			{
			_putchar(' ');
			_putchar(' ');
			}
			else if (a * (b + 1) < 100)
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
