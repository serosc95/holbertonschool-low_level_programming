#include"holberton.h"
/**
 * _strlen_recursion - length of a string.
 * @s: pointer.
 * Return: number integer.
 */
int _strlen_recursion(char *s)
{
	int aux;

	if (*s != '\0')
	{
		aux = _strlen_recursion(++s);
		return (aux + 1);
	}
	return (0);
}
