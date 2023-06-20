#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 * print_alphabet() is function that prints alphabets in lower case
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
