#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: starting address of the memory to be filled
 * @b: byte to be filled
 * @n: number of bytes 
 *
 * Return: changed array with new value
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
