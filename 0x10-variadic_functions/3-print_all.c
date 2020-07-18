#include"variadic_functions.h"
/**
 * prin_char - print char.
 * @valist: char to print.
 */
void prin_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * prin_integer - print integer.
 * @valist: int to print.
 */
void prin_integer(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * prin_float - print float.
 * @valist: float to print.
 */
void prin_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * prin_string - print string.
 * @valist: string to print.
 */
void prin_string(va_list valist)
{
	char *ptr;

	ptr = va_arg(valist, char *);
	if (ptr == NULL)
		ptr = "(nil)";
	printf("%s", ptr);
}
/**
 * print_all - print all.
 * @format: ist of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	prin_t direc[] = {
		{"c", prin_char},
		{"i", prin_integer},
		{"f", prin_float},
		{"s", prin_string},
		{NULL, NULL}
	};
	int i = 0, j;
	char *separator = "";

	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(direc[j].data))
			{
				printf("%s", separator);
				direc[j].fun(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
