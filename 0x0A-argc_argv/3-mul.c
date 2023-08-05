#include "main.h"

/**
 * main - checks the code
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Returns an integer value
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (EXIT_SUCCESS);
}
