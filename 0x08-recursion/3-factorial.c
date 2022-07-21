#include "main.h"

/**
 * factorial - Return the factorial of a given number
 * @n: given parameter
 * Return: -1 if n is less than 0 or the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
