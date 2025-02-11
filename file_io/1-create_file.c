#include "main.h"

/**
 * create_file - Creates a file or replaces it if it exists.
 * @filename: Name of the file to create.
 * @text_content: Content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
		while (text_content[length])
			length++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
