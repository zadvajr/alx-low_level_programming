#include "main.h"
/**
 * _isdigit - checks whether a character is a digit
 *
 * @c: only parameter
 *
 * Return: Returns 0 or 1 
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
