#include "main.h"

/**
 * read_textfile - reads text and writes it to the standard output
 * @filename: a pointer to the text file
 * @letters: the number of bytes to be read
 * Return: bytes Read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytesRead;
	ssize_t bytesWrite;

	buff = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	bytesRead = read(fd, buff, letters);
	bytesWrite = write(STDOUT_FILENO, buff, bytesRead);

	if (bytesRead == -1 || bytesWrite == -1 || fd == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);
	return (bytesRead);
}
