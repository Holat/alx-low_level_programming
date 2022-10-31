#include "main.h"

/**
 * append_text_to_file - it appends a file
 * @filename: the filename
 *
 * @text_content: the text content to be appended to the file
 * Return: 1 if creation is successful and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}
