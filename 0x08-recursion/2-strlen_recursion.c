#include "main.h"

/**
 * _strlen_recursion - Prints the total number of characters in a string s
 * @s: String to be passed
 * Return: On success returns 1.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
