#include"holberton.h"
#include<stdio.h>
/**
 * main - prints its name.
 * @argc: integer.
 * @argv: pointer array.
 * Return: integer zero.
 */
int main(int argc, char *argv[])
{
	if (*argv != '\0')
		printf("%d\n", --argc);
	return (0);
}
