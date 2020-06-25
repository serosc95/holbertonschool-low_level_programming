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
	int j = 0, i = 0;

	if (n > 0)
		for (; j < n; j++, i++)
		{
			if (src[j] == '\0')
			{
				dest[i] = '\0';
				j = n;
			}
			else
				dest[i] = src[j];
		}
	return (dest);
}
