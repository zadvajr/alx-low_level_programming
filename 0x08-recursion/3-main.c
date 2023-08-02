#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", -1024);
	r = factorial(20);
	printf("%d\n", r);
	return (0);
}
