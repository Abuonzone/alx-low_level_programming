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
	int n = x - 1;
	char y;
	char z[x + 1];

	for (i = n; i >= 0; i--)
	{
		a = *(s + i);
		*(z + (n - i)) = a;
	}
	for (i = 0; i <= n; i++)
	{
		*(s + i) = *(z + i);
	}
	_putchar('\n');
}
