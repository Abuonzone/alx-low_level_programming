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
	unsigned long int y = n;
	unsigned int x = 0;

	while (y > 0)
	{
		y = y >> 1;
		x++;
	}

	if (index < (x * 2))
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
