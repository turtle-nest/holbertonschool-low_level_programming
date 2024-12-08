#include "main.h"

/**
 * read_textfile - Lit un fichier texte et imprime son contenu.
 * @filename: Nom du fichier à lire.
 * @letters: Nombre de lettres à lire et imprimer.
 *
 * Return: Nombre de lettres réellement lues et imprimées, ou 0 en cas d'échec.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(fd);

	if (n_written == -1 || n_written != n_read)
		return (0);

	return (n_written);
}
