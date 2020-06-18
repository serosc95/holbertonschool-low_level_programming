#include"holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: number ASCII
 * Return: 1 digit or 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
