#include "function_pointers.h"

/**
 * array_iterator - Function Pointers example
 * @array: param 1
 * @size: param 2
 * @action: function pointer param
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
