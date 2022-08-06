#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: param 1
 * @size: param 2
 * @cmp: param 3
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
