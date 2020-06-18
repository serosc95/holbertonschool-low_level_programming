#include"holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 48; i < 59; i++)
	{
		if (i > 57)
		{
			j = 49;
			i = 48;
		}
		if (j == 49)
			_putchar(j);
		_putchar(i);
		if (j == 49 && i == 52)
			i = 59;
	}
	_putchar(10);
}
