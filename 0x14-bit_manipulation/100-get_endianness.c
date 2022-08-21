#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Check Endiannes
 * Return: integer
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
