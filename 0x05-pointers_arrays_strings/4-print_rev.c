#include <string.h>
#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: pointer parameter
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
