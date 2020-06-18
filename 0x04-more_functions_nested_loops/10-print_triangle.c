#include"holberton.h"
/**
 * print_triangle - prints a triangle.
 * @size: number lines.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i + 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar(10);
	}
	if (size < 1)
		_putchar(10);
}
