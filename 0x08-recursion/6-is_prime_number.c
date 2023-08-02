#include "main.h"

/**
 * _prime - check n for prime
 * @n: number to be checked
 * @g: guesses
 *
 * Return: Returns 1 if prime, otherwise 0.
 */

int _prime(int n, int g)
{
	if (n % g == 0)
	{
		if (n == g)
			return (1);
		else
			return (0);
	}
	return (_prime(n, g + 1));
}

/**
 * is_prime_number - Checks if n is a prime number
 * @n: integer to be checked
 *
 * Return: Returns 1 if n is prime
 * Otherwise returns 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
