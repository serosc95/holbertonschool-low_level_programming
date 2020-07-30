#include"holberton.h"
/**
 * binary_to_uint - converts a binary number.
 * @b: is a string in binary.
 * Return: number decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, number = 0, i;
	int j = 0;

	if (b == NULL)
		return (0);
	while (b[j])
		j++;
	j--;
	for (i = 1; j >= 0; i *= 2, j--)
	{
		if (b[j] == '1')
			number = 1;
		else
			number = 0;
		if (decimal == 0 && number == 1)
			decimal = i * number;
		else if (number == 1)
			decimal += (i * number);
	}
	return (decimal);
}
