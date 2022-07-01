#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;
	int y;

	for (n = 0; n < 8; n++)
	{
		for (x = n + 1; x < 9; x++)
		{
			for (y = x + 1; y < 10; y++)
			{
				putchar(n + 48);
				putchar(x + 48);
				putchar(y + 48);
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
