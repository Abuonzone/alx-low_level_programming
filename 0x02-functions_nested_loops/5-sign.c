#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: Parameter
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 48);
		return (0);
	}
	else
		return (-1);
}