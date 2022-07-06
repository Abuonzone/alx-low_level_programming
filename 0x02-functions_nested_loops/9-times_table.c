#include "main.c"
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
			_putchar(y + 48);
			_putchar(',');
			if (x < 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
