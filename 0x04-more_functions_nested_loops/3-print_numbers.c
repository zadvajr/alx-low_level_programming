#include "main.h"
/**
 * print_numbers - prints 0 - 9
 *
 * Return: Always void
 *
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
