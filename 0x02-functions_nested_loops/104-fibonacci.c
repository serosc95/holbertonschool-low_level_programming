#include"holberton.h"
#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	double suma = 1, a = 1, b;
	int i;

	for (i = 2; i < 98; i++)
	{
		b = suma;
		suma = suma + a;
		a = b;
		printf("%f", a);
		if (i != 51)
			printf(", ");
	}
	printf("\n");
	return (0);
}
