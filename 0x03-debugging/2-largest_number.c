#include "main.h"

/**
 * largest_number - Print the largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b) )
	{
		return a;
	}
	else if ((b > a && a > c) || (b > c && c > a))
	{
		return b;
	}
	else
		return c;
}
