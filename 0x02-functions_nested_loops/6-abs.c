#include "main.h"
/**
 * _abs - prints absoute value of a number
 *
 * @r: parameter to store the argument
 * Return: Always returns the absolute value of a given number
 *
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = -(r);
	}

	else
	{
		r = r;
	}
	
	return (r);
}
