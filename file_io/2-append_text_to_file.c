#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 if the file exists, -1 if fails and does not exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int WRITE;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		WRITE = write(fd, text_content, numletters);

		if (WRITE == -1)
			return (-1);
	}
	close (fd);
	return (1);
}
