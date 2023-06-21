#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function to print from n to 98
 * @n: parameter
 *
 * Return: Returns void
 *
 */
void print_to_98(int n)
{
	int limit;
	int i;
	int j;

	limit = 98;

	if (n <= limit)
	{
		for (i = n; i <= limit; i++)
		{
			printf("%d, ", i);
		}
	}

	else
	{
		for (j = n; j >= limit; j--)
		{
			printf("%d, ", j);
		}
	}
}
