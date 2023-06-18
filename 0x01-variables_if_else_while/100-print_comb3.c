#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	for (m = 49; m <= 57; m++)
	{
		if (m > n)
		{
			putchar(n);
			putchar(m);
			
			if (n != 57 || m != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
