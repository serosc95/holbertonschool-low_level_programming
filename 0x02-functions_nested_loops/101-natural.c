#include"holberton.h"
#include<stdio.h>
/**
 * main - print the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: zero
 */
int main(void)
{
	int i, suma = 0;

	for (i = 1; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			suma = suma + i;
	printf("%d\n", suma);
	return (0);
}
