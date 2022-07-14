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
	int i;
	int x;

	for (i = n - 1; i >= 0; i--)
	{
		b[(n - 1) - i] = a[i];
	}
	for (x = 0; x < i; x++)
	{
		a[x] = b[(i - 1) - x];
	}
}
