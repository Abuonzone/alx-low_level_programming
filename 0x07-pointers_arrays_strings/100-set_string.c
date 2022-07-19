#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer to a pointer parameter
 * @to: pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	return (strcpy(s, to));
}
