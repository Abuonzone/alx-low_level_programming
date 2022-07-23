#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that ptints it name
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
