#include <string.h>
#include "main.h"

/**
 * rev_string - Print string in reverse
 * @s: pointer parameter
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int x = strlen(s);
	char a;

	for (i = 0; i < x; i++)
	{
		a = *(s + i);
		*(s + (x - (1 + i))) = a;
	}
	_putchar('\n');
}
