#include "main.h"
#include <string.h>

/**
 * puts_half - Print every other character of the string
 * @str: pointer paramter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int x = strlen(str);
	int n = x / 2;

	for (i = n + 1; i < x; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
