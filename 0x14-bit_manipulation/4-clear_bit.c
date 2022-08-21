#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer parameter
 * @index: index to set bit param
 * Return: 1 if it worked
 * or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n & (~(1 << index)));
	if (n)
		return (1);
	else
		return (-1);
}
