#include"holberton.h"
/**
 * _pow_recursion - value of x raised to the power of y.
 * @x: integer.
 * @y: integer.
 * Return: number integer.
 */
int _pow_recursion(int x, int y)
{
	int aux;

	if (y > 0)
	{
		y--;
		aux = _pow_recursion(x, y);
		return (x * aux);
	}
	else if (y < 0)
		return (-1);
	return (1);
}
