#include "main.h"
/**
 * main - prints alphabets 10 times
 *
 * Return: Always void (Success)
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i =0; i < 10; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
