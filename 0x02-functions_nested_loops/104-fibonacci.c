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
		printf("%.0f", a);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
