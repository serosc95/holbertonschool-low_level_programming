#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sum all arguments.
 * @n: list the number of arguments.
 * Return: result sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int result = 0;
	unsigned int i;

	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		result += va_arg(valist, int);
	va_end(valist);
	return (result);
}
