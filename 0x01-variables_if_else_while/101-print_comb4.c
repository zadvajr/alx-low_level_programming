#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 * program to print all possible combination of 3 digits numbers
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((j != i) != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7' && j != '8')
					{
						continue;
					}

					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
