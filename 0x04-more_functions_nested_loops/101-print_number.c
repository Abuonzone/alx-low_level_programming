#include "main.h"

/**
 * print_number - Print only integers
 * @n: Input Parameter
 * Return: void
 */

void print_number(int n)
{
	int k, j;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	k = n / 10;
	j = n % 10;

	if (k)
	{
		print_number(k);
	}
	_putchar(j + '0');
}
