#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse order
 *
 * @s: String to be printed
 *
 * Return: Always returns 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
