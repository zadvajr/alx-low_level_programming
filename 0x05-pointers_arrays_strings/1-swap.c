#include "main.h"
/**
 * swap_int - swaps values of integer variables
 *
 * @a - points to value address of a
 * @b - points to value addrss of b
 *
 * Return: Returns void
 *
 */
void swap_int (int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
