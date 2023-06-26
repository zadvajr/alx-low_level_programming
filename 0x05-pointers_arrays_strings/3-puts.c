#include "main.h"
/**
 * _puts - prints string to std out
 *
 * @str: single parameter passed as pointer
 *
 * Return: Always returns void
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
