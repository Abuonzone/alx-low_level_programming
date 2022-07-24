#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 2 || argc == 1)
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
		int ncoins = 0;
		int cents = atoi(argv[1]);

		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			ncoins++;
		}

		printf("%d\n", ncoins);
	}
	return (0);
}
