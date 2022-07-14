#include "main.h"

/**
 * reverse_array - Reverse the content of an array
 * @a: array parameter
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b[n];
	int i, x, c;

	for (i = 0; i < n; i++)
	{
		b[i] = a[(n - 1) - i];
	}
	c = sizeof(b) / sizeof(int);
	for (x = 0; x < c; x++)
	{
		a[x] = b[x];
	}
}
