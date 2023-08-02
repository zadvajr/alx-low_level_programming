#include "main.h"

/**
 * factorial - computes factorial of n
 * @n: Number to compute factorial from
 *
 * Return: Always returns factorial of n
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		fact = -1;
	else if (n == 0)
		fact = 1;
	else
		fact = n * factorial(n - 1);
	return (fact);
}
