#include "main.h"
#include "string.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i, j;
	int str_len = strlen(s);
	char b[str_len];

	for (i = 0; i < str_len && s[i] != '\0'; i++)
	{
		b[i] = s[str_len - (i + 1)];
	}
	for (j = 0; j < str_len && b[j] != '\0'; j++)
	{
		_putchar(b[j]);
	}
}
