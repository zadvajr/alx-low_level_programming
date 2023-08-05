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
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
