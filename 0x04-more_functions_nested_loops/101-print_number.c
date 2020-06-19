#include"holberton.h"
/**
 * print_number - prints an integer.
 * @n: number.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		b = -n;
		_putchar('-');
	}
	else
		b = n;
	if (b / 10 > 0)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
