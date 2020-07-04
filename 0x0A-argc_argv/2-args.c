#include"holberton.h"
#include<stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: integer.
 * @argv: pointer array.
 * Return: integer zero.
 */
int main(int argc, char *argv[])
{
	int i;

	if (*argv != '\0')
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
