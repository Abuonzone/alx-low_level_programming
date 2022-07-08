#include "main.h"
#include <stdio.h>

/**
 * largest_number - Print the largest number
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
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

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
