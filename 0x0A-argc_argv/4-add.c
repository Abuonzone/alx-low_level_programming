#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that ptints it name
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int ans = 0;
	int err;


	if (argc == 1)
	{
		putchar(48);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			ans += atoi(argv[i]);
		}
		else
		{
			err = 1;
			break;
		}
	}
	if (err == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", ans);
		return (0);
	}
}
