#include<stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: 0.
 */
int main(void)
{
	long int i, n = 612852475143, factor;

	for (i = 2; i <= n; i++)
		if (n % i == 0)
		{
			n = n / i;
			factor = i;
			i = 1;
		}
	printf("%ld\n", factor);
	return (0);
}
