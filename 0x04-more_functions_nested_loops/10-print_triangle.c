#include "main.h"
/**
 * print_triangle - Draw a triangle in the terminal
 * @n: parameter
 * Return: void
 */
void print_triangle(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < n - 1; j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
