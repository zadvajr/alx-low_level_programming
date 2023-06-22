#include "main.h"
/**
 * _isupper - checks if a function is upper or lower
 *
 * @c: formal parameter for the functionn
 *
 * Return: 1 or 0 depending on parameter c is upper or lower
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
