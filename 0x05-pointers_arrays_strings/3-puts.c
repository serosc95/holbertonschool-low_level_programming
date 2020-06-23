#include"holberton.h"
/**
 * _puts - prints a string.
 *
 * @str: pointer.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar(10);
}
