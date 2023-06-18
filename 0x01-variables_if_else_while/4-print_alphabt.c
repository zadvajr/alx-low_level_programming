#include <stdio.h>
/**
 * main - Entry Proint
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}

	putchar(10);

	return (0);
}
