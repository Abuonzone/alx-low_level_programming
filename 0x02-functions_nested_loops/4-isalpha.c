#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Checks for alphabetic character character
 * @c: Parameter
 * Return: 1 if alphabetic, 0 if otherwise
 */
int _isalpha(int c)
{
	if (!(isalpha(c)))
		return (0);
	else
		return (1);
}
