#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	char *p2;
	char operator;
	int p1, p3, result;
	int (*ans)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	if ((operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	p1 = atoi(argv[1]);
	p3 = atoi(argv[3]);
	if ((operator == '/' || operator == '%') && p3 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	p2 = argv[2];
	ans = get_op_func(p2);
	result = (*ans)(p1, p3);
	printf("%d\n", result);
	return (0);
}
