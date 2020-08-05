#include"holberton.h"
/**
 * error_read - error read
 * @argv: string
 */
void error_read(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * error_write - error write
 * @argv: string
 */
void error_write(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}
/**
 * error_close - error close
 * @file: integer
 */
void error_close(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}
/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, wr;
	char *buffer[1024];
	int caracter = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_read(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error_write(argv[2]);
	while (caracter > 0)
	{
		caracter = read(file_from, buffer, 1024);
		if (caracter == -1)
			error_read(argv[1]);
		wr = write(file_to, buffer, caracter);
		if (wr == -1)
			error_write(argv[2]);
	}
	if (close(file_from) == -1)
		error_close(file_from);
	if (close(file_to) == -1)
		error_close(file_to);
	return (0);
}
