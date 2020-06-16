#include"holberton.h"
#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	long int i, suma = 1, a = 1, b;

	for (i = 2; i < 50; i++)
	{
		b = suma;
		suma = suma + a;
		a = b;
		printf("%li, ", a);
	}
	printf("%li\n", a);
	return (0);
}
