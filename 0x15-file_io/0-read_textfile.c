#include"holberton.h"
/**
 * read_textfile - reads a text file and prints.
 * @filename: filename.
 * @letters: number of characters.
 * Return: printed characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t count;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	str = malloc(letters * sizeof(char));
	if (!str)
		return (0);
	count = read(fd, str, letters);
	if (count < 0)
		return (0);
	count = write(STDOUT_FILENO, str, count);
	if (count < 0)
		return (0);
	free(str);
	close(fd);
	return (count);
}
