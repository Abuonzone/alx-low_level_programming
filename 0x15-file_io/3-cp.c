#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1024

/**
 * error_msg - give the error messages as required
 * @file_from: arg1
 * @file_to: arg2
 * @argv: argument vector
 * Return: void
 */
void error_msg(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Write a program that copies the content of a file to another file
 * @ac: Argument count
 * @av: argument vector
 * Return: Always 0 success
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	int rchars, wchars;
	int from_close, to_close;
	char buff[BUFFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	error_msg(file_from, file_to, av);

	rchars = BUFFSIZE;
	while (rchars == 1024)
	{
		rchars = read(file_from, buff, 1024);
		if (rchars < 0)
			error_msg(-1, 0, av);
		wchars = write(file_to, buff, rchars);
		if (wchars < 0)
			error_msg(0, -1, av);
	}

	from_close = close(file_from);
	if (from_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	to_close = close(file_to);
	if (to_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
