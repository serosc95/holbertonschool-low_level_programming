#include"holberton.h"
#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	unsigned long int suma = 1, a = 1, b;
	int i;

	for (i = 2; i < 100; i++)
	{
		b = suma;
		suma = suma + a;
		a = b;
		printf("%lu", a);
		if (i != 51)
			printf(", ");
	}
	printf("\n");
	return (0);
}
