#include <ctype.h>
#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: parameter
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (!(isdigit(c)))
		return (0);
	else
		return (1);
}
