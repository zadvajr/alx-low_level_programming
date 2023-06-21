#include "main.h"
/**
 * _isalpha - function accepts one parameter and
 * returns 1 if it is an alphabet or otherwise 0
 *
 * @c: parameter to the function
 * Return: Always integer value
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
