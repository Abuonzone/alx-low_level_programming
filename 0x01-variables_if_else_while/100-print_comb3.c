#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n < 9; n++)
	{
		for (x = n + 1; x < 10; x++)
		{
			putchar(n + 48);
			putchar(x + 48);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
