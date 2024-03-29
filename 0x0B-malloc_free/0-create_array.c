#include "main.h"
#include "stddef.h"
#include "stdlib.h"

/**
 * create_array - create an array of characters
 * @size: size of the array parameter
 * @c: parameter
 * Return: Null if size = 0, or pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	str[0] = c;

	i = 1;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}


