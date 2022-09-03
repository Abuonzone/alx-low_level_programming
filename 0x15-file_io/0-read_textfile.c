#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: param 1
 * @letters: param 2
 * Return: actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int sz;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_CREAT);

	if (fd < 0)
		return (0);

	sz = write(fd, filename, letters);
	if (!sz)
	{
		return (0);
	}
	write(1, filename, letters);
	return (sz);
}
