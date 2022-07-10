#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Draw a triangle in the terminal
 * @size: parameter
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int k;

			for (k = i; k < ; k++)
			{
				if (k < size - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
