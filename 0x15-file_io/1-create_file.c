#include"holberton.h"
/**
 * create_file - creates a file.
 * @filename: filename.
 * @text_content: string.
 * Return: number of characters.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		write(fd, text_content, count);
	}
	close(fd);
	return (1);
}
