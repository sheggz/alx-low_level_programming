#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
/**
 * read_textfile - function that reads a text file and prints it to the
 *		 POSIX standard output
 * @filename: pointer to the filename we are to read from
 * @letters: number of letters to be read and printed
 * Return: 0 if read, write or open fails else number of chars written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		int fd;
		ssize_t bytes_wri; /* file descriptor */
		char *buf = malloc((letters * sizeof(char) + 1));

		if (buf == NULL)
			return (0);
		/* int open(const char *pathname, int flags) */
		fd = open(filename, O_RDONLY);	/* returns a file descriptor */
		if (fd < 0)
			return (0);

		/* ssize_t read(int fd, void *buf, size_t count); */
		if (read(fd, buf, letters) == -1)
			return (0);
		*(buf + sizeof(buf)) = '\0';

		/* ssize_t write(int fd, const void *buf, size_t count); */
		bytes_wri = write(STDOUT_FILENO, buf, letters);
		if (bytes_wri < (int)letters || bytes_wri == -1)
			return (0);
		return (bytes_wri);
		close(fd);
		free(buf);
	}
	return (0);
}
