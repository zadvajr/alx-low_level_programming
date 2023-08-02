#include "main.h"

/**
 * _sqrt - Finds the square root
 * @n: Number to be passed
 * @g: square root guess
 *
 * Return: Returns g, otherwise -1
 */

int _sqrt(int n, int g)
{
	if (g * g > n)
	{
		return (-1);
	}
	else if (g * g == n)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, g+1));
	}
}

/**
 * _sqrt_recursion - Computes sqrt of n
 * @n: Number to compute sqrt of
 *
 * Return: Returns the sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
