#include "main.h"
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 *
 * Function code that prints alphabets in lowercase
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
