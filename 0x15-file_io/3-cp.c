#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

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
	int err_message;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_msg(file_from, file_to, av);

	rchars = 1024;
	while (rchars == 1024)
	{
		rchars = read(file_from, buff, 1024);
		if (rchars == -1)
			error_msg(-1, 0, av);
		wchars = write(file_to, buff, rchars);
		if (wchars == -1)
			error_msg(0, -1, av);
	}

	err_message = close(file_from);
	if (err_message == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_message = close(file_to);
	if (err_message == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
