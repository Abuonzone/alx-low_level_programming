#include "main.h"
#include <string.h>

/**
 * puts2 - Print every other character of the string
 * @str: pointer paramter
 * Return: void
 */

void puts2(char *str)
{
	unsigned long i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
