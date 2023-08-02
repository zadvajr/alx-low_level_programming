#include "main.h"
#include <string.h>

/**
 * _palindrome - checks if a string is a palindrome
 * @str: string to be checked
 * @s: starting of string
 * @e: end of string
 *
 * Return: Returns 1 if true and 0 if otherwise
 */

int _palindrome(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (_palindrome(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - checks palindrome
 * @s: strig
 *
 * Return: Returns 1 on success otherwise 0.
 */

int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (0);
	return (_palindrome(s, 0, n - 1));
}
