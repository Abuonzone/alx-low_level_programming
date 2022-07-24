#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - a program that ptints it name
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int ans = 0;


	if (argc == 0)
	{
		putchar(48);
		putchar('\n');
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < argv[i][j] && argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					ans += atoi(argv[i]);
				}
			}
		}
		printf("%d\n", ans);
		return (0);
	}
}
