#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n = n + 1;
	}
	char x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}
