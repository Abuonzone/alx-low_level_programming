#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1024
/**
 * Write a program that copies the content of a file to another file
 * @ac: Argument count
 * @av: argument vector
 * Return: Always 0 success
 */

int main(int ac, char **av)
{
	int fd1, fd2;
	int cp1, cp2;
	char buff[BUFFSIZE];

	if (ac > 3)
	{
		exit(97);
		dprintf(STDERR_FILENO,"cp file_from file_to\n");
	}

	fd1 = open(av[1], O_RDONLY);
	cp1 = read(fd1, buff, sizeof buff);
	if (fd1 == -1 || cp1 < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	cp2 = write(fd2, buff, cp1);
	if (fd2 == -1 || cp2 < 0)
	{
		exit(99);
		dprintf(STDERR_FILENO,"Can't write to %s\n", av[2]);
	}


	close(fd1);
	close(fd2);

	return (0);
}
