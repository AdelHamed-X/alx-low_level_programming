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
	char buff[1024];
	ssize_t bytesRead;
	ssize_t bytesWrite;

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buff, letters);
	if (bytesRead == -1)
		return (0);

	bytesWrite = write(STDOUT_FILENO, buff, bytesRead);
	if (bytesWrite == -1)
		return (0);

	close(fd);
	return (bytesRead);
}
