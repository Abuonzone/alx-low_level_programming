#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int n, x, y;

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 9; x++)
		{
			y = n * x;
			_putchar('0' + y);
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
