#include"holberton.h"
/**
 * set_bit -  sets the value of a bit to 1.
 * @n: is a number.
 * @index: is a position.
 * Return: number in the position.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1;

	if (index > 63)
		return (-1);
	for (; index > 0; index--)
		aux *= 2;
	*n += aux;
	return (1);
}
