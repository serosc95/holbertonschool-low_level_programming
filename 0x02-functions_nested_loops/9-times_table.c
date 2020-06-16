#include"holberton.h"
/**
 * times_table - print the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, aux, aux1;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
			aux = a * b;
			if (aux > 9)
			{
				aux1 = aux - (aux % 10);
				_putchar((aux1 / 10) + '0');
				_putchar((aux % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(aux + '0');
			}
		}
		_putchar(10);
	}
}
