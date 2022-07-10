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

		for (i = 0; i < n; i++)
		{
			int k = i;
			while (k < n - 1)
			{
				_putchar(' ');
				k++;
			}
			
			int l = i;
			while (l >= 0)
			{
				_putchar('#');
				l--;
			}
			_putchar('\n');
		}
	}
}
