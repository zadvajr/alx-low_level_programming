#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to be printed
 *
 * Return: returns 1 on success.
 * On error -1 is returned and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
