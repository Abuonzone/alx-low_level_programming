#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		for(y = n; y < 9; y++)
		{
			putchar(y + 48)
		for (x = 0; x < 9; x++)
		{
			putchar(' ');
			putchar(x + 48);
			putchar(x + 49);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
