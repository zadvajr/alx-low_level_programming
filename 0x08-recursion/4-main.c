#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always return 0.
 */
int main(void)
{
	int r = 0;

	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%di", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
