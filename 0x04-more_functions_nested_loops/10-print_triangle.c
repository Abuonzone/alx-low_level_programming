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
		_putchar('#');
	}
}
