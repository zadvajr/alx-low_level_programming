#include "main.h"
/**
 * Function code that prints alphabets in lowercase
 *
 * Return value is void
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
