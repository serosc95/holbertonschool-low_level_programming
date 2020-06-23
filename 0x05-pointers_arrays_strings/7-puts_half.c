#include"holberton.h"
/**
 * puts_half - prints half of a string.
 *
 * @str: pointer.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, mitad = 0;

	while (str[mitad] != '\0')
		mitad++;
	mitad++;
	if (mitad % 2 != 0)
		mitad = (mitad - 1) / 2;
	else
		mitad = mitad / 2;
	for (i = mitad; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar(10);
}
