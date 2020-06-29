#include"holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer.
 * @src: pointer.
 * @n: number
 * Return: result pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *aux = dest;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	return (daux);
}
