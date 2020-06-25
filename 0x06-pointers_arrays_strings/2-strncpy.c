#include"holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: pointer.
 * @src: pointer.
 * @n: number
 * Return: result pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
                	dest[j] = '\0';
			j = n;
		}
		else
			dest[j] = src[j];
	}
	return (dest);
}
