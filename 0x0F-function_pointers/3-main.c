#include"3-calc.h"
/**
 * main - function main.
 * @argc: arguments numbers.
 * @argv: arguments values.
 * Return: zero integer.
 */
int main(int argc, char **argv)
{
	int a, b, aux;
	int (*operar)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operar = get_op_func(argv[2]);
	aux = operar(a, b);
	printf("%d\n", aux);
	return (0);
}
