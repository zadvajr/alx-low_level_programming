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
	int i = 0;

	for(; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
