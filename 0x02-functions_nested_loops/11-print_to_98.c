#include <stdio.h>
/**
 * add - adds two numbers
 *
 * @a: first num to add to b
 * @b: second num to add to a
 *
 * Return: the result
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("%d\n", n);
}
