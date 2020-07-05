#include"holberton.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: integer.
 * @argv: pointer array.
 * Return: integer zero.
 */
int main(int argc, char *argv[])
{
	int coin = 0, vueltos = 0;

	if (argc == 2)
	{
		coin = atoi(argv[1]);
		while (coin > 24)
		{
			coin = coin - 25;
			vueltos++;
		}
		while (coin > 9)
		{
			coin = coin - 10;
			vueltos++;
		}
		while (coin > 4)
		{
			coin = coin - 5;
			vueltos++;
		}
		while (coin > 1)
		{
			coin = coin - 2;
			vueltos++;
		}
		while (coin > 0)
		{
			coin = coin - 1;
			vueltos++;
		}
		printf("%d\n", vueltos);
	}
	else
		printf("Error\n");
	return (0);
}
