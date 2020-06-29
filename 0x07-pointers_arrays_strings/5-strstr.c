#include"holberton.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return: result pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, aux;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			aux = i;
			for (j = 0; needle[j] != '\0'; j++, aux++)
				if (needle[j] == haystack[aux])
					k++;
				else
				{
					k = 0;
					break;
				}
		}
		if (k != 0 && needle[j] == '\0')
			return (&(haystack[i]));
	}
	return (0);
}
