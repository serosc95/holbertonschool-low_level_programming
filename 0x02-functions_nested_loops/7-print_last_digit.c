#include"holberton.h"
/**
 * print_last_digit - print Alphabet Holberton
 *
 * Return: int.
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (lastd < 0)
		lastd = -lastd;
	_putchar(lastd + '0');
	return (lastd);
}
