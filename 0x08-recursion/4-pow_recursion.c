#include "main.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer params
 * @y: integer params
 * Return: -1 if y < 0 || integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (_pow_recursion(x * x, y - 1));
	}
}
