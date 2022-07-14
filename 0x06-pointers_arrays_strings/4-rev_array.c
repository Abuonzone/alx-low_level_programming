#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array
 * @a: array parameter
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int value, i;

	for (i = 0; i < n / 2; i++)
	{
		value = a[i];
		a[i] = a[(n - i) - 1];
		a[(n - i) - 1] = value;
	}
}
