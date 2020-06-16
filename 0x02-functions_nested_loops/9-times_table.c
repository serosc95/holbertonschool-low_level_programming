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
			aux = a * b;
			if (aux > 9)
			{
				aux1 = aux - (aux % 10);
				_putchar((aux1 / 10) + '0');
				_putchar((aux % 10) + '0');
			}
			else
				_putchar(aux + '0');
			if(b < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (a * (b + 1) < 10)
					_putchar(' ');
			}
		}
		_putchar(10);
	}
}
