#include"holberton.h"
#include<stdio.h>
/**
 * rev_string - reverses a string.
 *
 * @s: pointer.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char *p = s, aux;

	while (*p != 0)
		p++;
	p--;
	while (p > s)
	{
		aux = *s;
		*s++ = *p;
		*p-- = aux;
	}
}
