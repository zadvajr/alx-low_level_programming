#include "main.h"

/**
 * _puts_recursion - Prints string followed by a newline
 *
 * @s: String to be printed
 *
 * Return: Returns nothing (void)
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
