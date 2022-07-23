#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that ptints it name
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
