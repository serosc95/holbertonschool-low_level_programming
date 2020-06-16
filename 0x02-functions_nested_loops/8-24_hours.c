#include"holberton.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, minutos, horas;

	for (a = 48; a < 51; a++)
	for (b = 48; b < 58; b++)
	{
		horas = a * 10 + b;
		if (horas == 552)
		{
			a = 51;
			b = 58;
		}
		else
		{
		for (c = 48; c < 55; c++)
		for (d = 48; d < 58; d++)
		{
			_putchar(a);
			_putchar(b);
			_putchar(58);
			_putchar(c);
			_putchar(d);
			_putchar(10);
			minutos = c * 10 + d;
			if (minutos == 587)
				c = 55;
		}
		}
	}
}
