#include"holberton.h"
/**
 * _isupper - checks for uppercase character.
 *
 * Return: 1 uppercase or 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
