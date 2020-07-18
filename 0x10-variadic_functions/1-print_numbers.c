#include"variadic_functions.h"
/**
 * print_numbers - print all arguments integers.
 * @separator: string between arguments.
 * @n: number arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
