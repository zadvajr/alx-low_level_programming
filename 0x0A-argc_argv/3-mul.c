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
	int num1 = 0, num2 = 0;

	if (argc < 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (EXIT_SUCCESS);
}
