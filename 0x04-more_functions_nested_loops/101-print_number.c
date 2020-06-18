#include"holberton.h"
/**
 * print_number - prints an integer.
 * @n: number.
 * Return: void.
 */
void print_number(int n)
{
	if (n >= 0)
		cicloMemoria(n);
	else
	{
		_putchar('-');
		cicloMemoria(-n);
	}
}

void cicloMemoria(int n)
{
	if (n / 10 != 0)
	{
		cicloMemoria(n / 10);
	}
	_putchar((n % 10) + '0');
}
