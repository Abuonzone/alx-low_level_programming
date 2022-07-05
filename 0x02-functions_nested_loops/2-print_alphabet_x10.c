#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int x;

	for (n = 0; n < 10; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
