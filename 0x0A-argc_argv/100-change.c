#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		putchar(48);
		putchar('\n');
	}
	if (atoi(argv[1]))
	{
		printf("%d\n", rand());
	}
	return (0);
}
