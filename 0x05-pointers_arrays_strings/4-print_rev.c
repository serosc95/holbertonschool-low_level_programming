#include"holberton.h"
/**
 * print_rev - prints a string, in reverse.
 *
 * @s: pointer.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	count = count - 1;
	while (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar(10);
}
