#include"holberton.h"
/**
 * flip_bits -	number of bits you would need to flip to get from one
 *		number to another.
 * @n: is a number.
 * @m: ia a number.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp;
	unsigned int count = 0;

	cmp = n ^ m;
	while (cmp != 0)
	{
		if ((cmp & 1) != 0)
			count++;
		cmp >>=1;
	}
	return (count);
}
