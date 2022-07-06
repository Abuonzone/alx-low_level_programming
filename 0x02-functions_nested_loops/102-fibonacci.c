#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int fibonacci(int n)
{
	int a[n];
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			a[i] = i;
		}
		else
		{
			a[i] = a[i-1] + a[i-2];
		}
	}
	return a[n];
}

int main(void)
{
	int x;

	for (x = 1; x <= 50; x++)
	{
		printf("%d, ", fibonacci(x));
	}
	return (0);
}
