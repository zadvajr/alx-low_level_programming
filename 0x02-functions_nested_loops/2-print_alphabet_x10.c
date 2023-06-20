#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
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
