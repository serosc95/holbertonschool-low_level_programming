#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct print_t
{
	char *data;
	void (*fun)(va_list);
} prin_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
