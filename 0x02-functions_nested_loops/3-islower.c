#include <ctype.h>
#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: Parameter
 * Return: Always 0
 */
int _islower(int c)
{
	if(!(islower(c)))
		return (0);
	else
		return (1);
}
