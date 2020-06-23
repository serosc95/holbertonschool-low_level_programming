#include"holberton.h"
/**
 * _strlen - length of a string.
 *
 * @s: pointer.
 *
 * Return: result.
 */
int _strlen(char *s)
{
	int cifras = 0;

	while (*(s + cifras) != '\0')
		cifras++;
	return (cifras);
}
