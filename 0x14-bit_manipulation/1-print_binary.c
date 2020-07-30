#include"holberton.h"
/**
 * print_binary - prints the binary of a number.
 * @n: is a number.
 */
void print_binary(unsigned long int n)
{
	int j;
	unsigned long int aux;

	if (n < 2)
		_putchar(n + '0');
	else
	{
		aux = n;
		for (j = 0; aux > 0; j++)
			aux = aux >> 1;
		for (j = j - 1; j >= 0; j--)
		{
			if ((n >> j) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
