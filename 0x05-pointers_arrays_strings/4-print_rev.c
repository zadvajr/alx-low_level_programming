#include "main.h"
/**
 * print_rev - prints string in reversal order
 *
 * @s: parameter to store the string
 *
 * Return: Always void
 *
 */
void print_rev(char *s)
{
	int i;
	int count;
	int j;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	j = count;

	while (s[j] != '\0')
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
