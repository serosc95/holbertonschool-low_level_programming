#include"holberton.h"
/**
 * clear_bit - sets the value of a bit to 0.
 * @n: is a number.
 * @index: is a position.
 * Return: number in the position.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
