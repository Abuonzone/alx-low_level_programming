#include "main.h"
/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
