#include "main.h"

/**
 * print_number - Print only integers
 * @n: Input Parameter
 * Return: void
 */

void print_number(int n)
{
	if (typeof(n) == int)
	{
		_putchar(n + '0');
	}
}
