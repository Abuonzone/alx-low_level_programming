#include "main.h"
/**
 * print_most_numbers - Print numbers from 0 - 9 excluding 2 & 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + 48);
	}
	_putchar('\n');
}
