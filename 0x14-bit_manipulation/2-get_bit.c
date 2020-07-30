#include"holberton.h"
/**
 * get_bit - value of a bit at a given index.
 * @n: is a number.
 * @index: is a position.
 * Return: number in the position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;
	unsigned long int aux;

	aux = n;
	for (j = 0; aux > 0; j++)
		aux = aux >> 1;
	j--;
	if (index > j)
		return (-1);
	n = n >> index;
	return (n % 2);
}
