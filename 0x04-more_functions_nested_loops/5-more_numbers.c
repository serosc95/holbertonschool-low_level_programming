#include"holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j = 48;

	for (i = 48; i < 63; i++)
		if (i < 58)
			_putchar(i);
		else
		{
			_putchar(49);
			_putchar(j);
			j++;
		}
	_putchar(10);
}
