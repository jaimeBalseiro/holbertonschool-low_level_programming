#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int WRITE;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numletters = 0; text_content[numletters]; numletters++)
		;

	WRITE = write(fd, text_content, numletters);

	if (WRITE == -1)
		return (-1);

	close(fd);

	return (1);
}
