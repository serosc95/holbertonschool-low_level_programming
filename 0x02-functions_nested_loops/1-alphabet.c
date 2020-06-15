#include"holberton.h"
/**
 * main - print Alphabet Holberton
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int i;

	for(i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
