#include"holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer.
 * @n: number.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n; i++, n--)
	{
		aux = a[i];
		a[i] = a[n - 1];
		a[n - 1] = aux;
	}
}
