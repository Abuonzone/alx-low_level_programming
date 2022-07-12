#include "main.h"
#include <string.h>

/**
 * puts_half - Print every other character of the string
 * @str: pointer paramter
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;
	int x = strlen(str);

	if (x % 2 != 0)
	{
		n = (x / 2) + 1;
	}
	else
	{
		n = x / 2;
	}

	for (i = n; i < x; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
