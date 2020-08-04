#include"holberton.h"
/**
 * append_text_to_file - appends text at the end.
 * @filename: filename.
 * @text_content: string.
 * Return: 1 if success and -1 if failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
