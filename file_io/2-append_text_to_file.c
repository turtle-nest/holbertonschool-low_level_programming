#include "main.h"

/**
 * append_text_to_file - Add text at the end of a file.
 * @filename: Name of file.
 * @text_content: Content to add.
 *
 * Return: 1 if success or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
		while (text_content[length])
			length++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		n_written = write(fd, text_content, length);
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
