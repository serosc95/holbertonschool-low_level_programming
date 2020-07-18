#include"variadic_functions.h"
/**
 * prin_char - print char.
 * @ch: char to print.
 */
void prin_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}
/**
 * prin_integer - print integer.
 * @in: int to print.
 */
void prin_integer(va_list in)
{
	printf("%d", va_arg(in, int));
}
/**
 * prin_float - print float.
 * @fl: float to print.
 */
void prin_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}
/**
 * prin_string - print string.
 * @str: string to print.
 */
void prin_string(va_list str)
{
	char *ptr;

	ptr = va_arg(str, char *);
	if (ptr != NULL)
		printf("%s", ptr);
	else
		printf("(nil)");
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

	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (direc[j].data != NULL)
		{
			if (format[i] == *(direc[j].data))
			{
				direc[j].fun(valist);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
