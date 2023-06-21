#include "main.h"
/**
 * print_sign - function to print a sign of a number
 * @n: parameter for function
 *
 * Returns: 1, 0, or -1 depending on the value of c
 *
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return ('-');
	}
}
