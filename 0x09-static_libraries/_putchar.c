#include <unistd.h>

/**
 * _putchar - prints character c
 * @c: character to be printed
 *
 * Return: Returns 1 on successe
 * Otherwise -1 and sets erno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
