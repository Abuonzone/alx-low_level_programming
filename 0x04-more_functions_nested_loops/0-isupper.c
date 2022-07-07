#include <ctype.h>
/**
 * _isupper - Checks for uppercase character
 * @c: parameter
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (!(isupper(c)))
		return (0);
	else
		return (1);
}
