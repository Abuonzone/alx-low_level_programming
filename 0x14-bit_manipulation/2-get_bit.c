#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal parameter
 * @index: index of bit to return param
 * Return: value of bit at index
 * or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;
	int x = 0;

	while (n > 0)
	{
		n >> 1;
		x++;
	}

	if (index <= x)
	{
		k = n >> index;
		if (k & 1)
			return (1);
		else
			return (0);
	}
	else
		return (-1);
}
