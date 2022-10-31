#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the name of the file to be read
 *
 * @letters: size of the letters
 * Return: numbers of letter it can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz = read(fd, c, letters);

	write(STDOUT_FILENO, c, sz);

	close(fd);
	free(c);
	return (sz);
}
