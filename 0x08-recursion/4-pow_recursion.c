#include "main.h"

/**
 * _pow_recursion - Computes x, to power of y
 * @x: index x 
 * @y: power y
 *
 * Return: Returns x to power of y
 */

int _pow_recursion(int x, int y)
{
	int r = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		r = x * _pow_recursion(x, (y - 1));
		return (r);
	}
}
