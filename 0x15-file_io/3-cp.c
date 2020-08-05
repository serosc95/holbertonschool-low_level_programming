#include"holberton.h"
/**
 * close_file - close file.
 * @file: is a file.
 */
void close_file(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}
/**
 * read_file - read file
 * @file: is a file
 */
void read_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * write_file - write file
 * @file: is a file
 */
void write_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * main - check the code for Holberton School students.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, aux;
	char str[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from < 0)
		read_file(av[1]);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
		write_file(av[2]);
	aux = read(file_from, str, 1024);
	while (aux > 0)
	{
		if (write(file_to, str, aux) < 0)
			write_file(av[2]);
		aux = read(file_from, str, 1024);
	}
	if (aux < 0)
		read_file(av[1]);
	if (close(file_from) < 0)
		close_file(file_from);
	if (close(file_to) < 0)
		close_file(file_to);
	return (0);
}
