#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer parameter
 * @index: index to set bit param
 * Return: 1 if it worked
 * or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n | (1 << index))
	{
		*n = (*n | (1 << index));
		return (1);
	}
	else
		return (-1);
}
