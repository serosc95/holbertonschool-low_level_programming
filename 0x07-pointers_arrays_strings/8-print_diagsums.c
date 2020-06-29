#include"holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer.
 * @size: number.
 * Return: vacio.
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
		diag1 = diag1 + a[(size + 1) * i];
	for (i = 1; i < size + 1; i++)
                diag2 = diag2 + a[(size - 1) * i];
	printf("%d, %d\n", diag1, diag2);
}
