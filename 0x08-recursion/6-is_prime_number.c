#include "main.h"

/**
 * is_prime_number - Checks if n is a prime number
 * @n: integer to be checked
 *
 * Return: Returns 1 if n is prime
 * Otherwise returns 0.
 */
int is_prime_number(int n)
{
	if (n % n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
