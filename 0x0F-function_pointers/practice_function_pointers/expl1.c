#include <stdio.h>
/**
 * fun - function to return a value
 *
 * @a: Parameter to be printed
 *
 * Return: Always returns void
 *
 */
void fun(int a)
{
	printf("The value of a is %d\n", a);

	return;
}

/**
 * main - checks the code
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	void (*fun_ptr)(int) = &fun;

	(*fun_ptr)(10);

	return (0);
}
