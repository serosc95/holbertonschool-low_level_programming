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

	while (n > 0)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
		}
		else
			dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
