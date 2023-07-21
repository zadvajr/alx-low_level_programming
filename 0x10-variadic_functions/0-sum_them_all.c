#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all arguments passed
 *
 * @n: Static parameter defined
 *
 * Return: Returns 0 if n = 0
 * Otherwise returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	va_start(list, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);

}
