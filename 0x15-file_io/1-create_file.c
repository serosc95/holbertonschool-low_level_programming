#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer to file.
 * @text_content: string.
 * Return: one success or else.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename)
	{
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);
		if (text_content)
		{
			while (text_content[i])
				i++;
			write(fd, text_content, i);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
