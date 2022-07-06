#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ans, n;

	ans = 0;
	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			ans = ans + n;
		}
	}
	printf("%d\n", ans);
}
