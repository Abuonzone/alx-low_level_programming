#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char x = 'A';

	for (; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
