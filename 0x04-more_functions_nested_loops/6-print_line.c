#include "main.h"
/**
 * print_line - Draw a straight line in the terminal
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i <= n)
		{
			_putchar('-');
			i++;
		}
		_putchar('\n');
	}
}
