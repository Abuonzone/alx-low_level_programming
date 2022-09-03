#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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
	ssize_t sz, prt;
	char *str;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * (letters));
	if (!str)
		return (0);

	sz = read(fd, str, letters);
	prt = write(STDOUT_FILENO, str, sz);

	close(fd);
	free(str);

	return (prt);
}
