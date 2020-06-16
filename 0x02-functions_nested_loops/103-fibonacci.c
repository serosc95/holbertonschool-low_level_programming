#include"holberton.h"
#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: zero
 */
int main(void)
{
	long int suma = 1, a = 1, b, sumapar = 0;

	while (a < 4000000)
	{
		b = suma;
		suma = suma + a;
		a = b;
		if (a % 2 == 0)
			sumapar = sumapar + a;
	}
	printf("%li\n", sumapar);
	return (0);
}
