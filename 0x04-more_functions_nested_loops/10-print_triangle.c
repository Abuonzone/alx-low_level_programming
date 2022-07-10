#include "main.h"

/**
 * print_triangle - Draw a triangle in the terminal
 * @size: parameter
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		
		for (i = 0; i < size; i++)
		{
			int k;

			for (k = i; k < size - 1; k++)
			{
				_putchar(' ');
			}

			int l;

			for (l = i; l >= 0; l--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
