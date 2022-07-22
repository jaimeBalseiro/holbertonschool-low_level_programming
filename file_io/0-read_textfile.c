#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename in this case Requiescat
 * @letters: # of letters printed
 * Return: # of letters printed, if fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t READ, WRITE;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	READ = read(fd, buf, letters);
	WRITE = write(STDOUT_FILENO, buf, READ);

	close(fd);

	return (WRITE);
}
