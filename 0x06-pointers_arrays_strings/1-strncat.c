#include"holberton.h"
/**
 * _strncat - concatenates two strings with length.
 * @dest: pointer.
 * @src: pointer.
 * @n: number
 * Return: result pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
