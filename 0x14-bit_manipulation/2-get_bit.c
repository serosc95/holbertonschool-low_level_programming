#include"holberton.h"
/**
 * get_bit - value of a bit at a given index.
 * @n: is a number.
 * @index: is a position.
 * Return: number in the position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	return (n % 2);
}
