#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*ans)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	ans = get_op_func(argv[2]);

	if (!ans)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = ans(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
