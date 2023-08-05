#include "main.h"

/**
 * main - checks the code
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Returns an integer value
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int x = 0;
	int y = 0;
	int prod = 0;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("%d\n", x);
	}
	else
	{
		printf("%d\n", prod);
	}
	return (EXIT_SUCCESS);
}
