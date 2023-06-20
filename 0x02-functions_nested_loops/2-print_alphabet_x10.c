#include "main.h"

/**
 * print_alphabet_x10 - function code to print alphabets 10 times
 *
 * Return: Returns nothing void (Success)
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
