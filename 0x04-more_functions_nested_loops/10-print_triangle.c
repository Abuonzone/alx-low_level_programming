#include "main.h"
/**
 * print_triangle - Draw a triangle in the terminal
 * @size: parameter
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int k = i;

			while (k < size - 1)
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
