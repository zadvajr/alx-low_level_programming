#include "main.h"

/**
 * _putchar - Prints character c
 * @c: Character to print
 *
 * Return: Always returns 1 on success
 * Otherwise return -1 and set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
