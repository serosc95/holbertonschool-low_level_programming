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
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
