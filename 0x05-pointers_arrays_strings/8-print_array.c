#include"holberton.h"
#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 *
 * @str: pointer.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i + 2] != '\0')
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf("\n");
}
