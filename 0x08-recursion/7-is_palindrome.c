#include"holberton.h"
/**
 * is_string - detect prime numbers.
 * @s: pointer.
 * Return: number integer.
 */
int is_string(char *s)
{
	int aux;

	if (*s != '\0')
	{
		aux = is_string(++s);
		return (aux + 1);
	}
	return (0);
}
/**
 * _compare - detect prime numbers.
 * @s: pointer.
 * @l1: integer.
 * @l2: integer.
 * Return: number integer.
 */
int _compare(char *s, int l1, int l2)
{
	if (l1 > l2)
	{
		if (s[l1] == s[l2])
			_compare(s, --l1, ++l2);
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - detect prime numbers.
 * @s: pointer.
 * Return: number integer.
 */
int is_palindrome(char *s)
{
	int l1, x;

	if (*s != '\0' && *(s + 1) != '\0')
	{
		l1 = is_string(s);
		x = _compare(s, l1 - 1, 0);
		return (x);
	}
	return (0);
}
