#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	print_alphabet();
	return (0);
}
