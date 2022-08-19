#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, k;
	int num_d, bit_num = 0;

	num_d = n;
	while (num_d > 0)
	{
		num_d = num_d >> 1;
		bit_num++;
	}
	for (i = bit_num - 1; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar(49);
		else
			_putchar(48);
	}
	_putchar('\n');
}
