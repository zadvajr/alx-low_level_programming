#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of given arguments
 *
 * @n: static variable passed
 *
 * Return: Returns the sum of all the arguments passed
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	sum = 0;

	for(i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	if (n == 0)
		return (0);
	return (sum);

}
