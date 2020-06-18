#include"holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number lines.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar(10);
}
