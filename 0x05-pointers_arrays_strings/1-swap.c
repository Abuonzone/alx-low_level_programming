#include "main.h"
/**
 * swap_int - Swap values of 2 integers
 * @a: pointer parameter 1
 * @b: pointer parametr 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = d;
}
