#include"holberton.h"
/**
 * print_square - prints a square.
 * @size: number lines.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}