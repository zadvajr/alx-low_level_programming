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
	int i;
	unsigned int k, sum = 0;
	char *e;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];
			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
