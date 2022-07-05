#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Print aphabets in lowercase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
