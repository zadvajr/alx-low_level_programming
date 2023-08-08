#include "main.h"

/**
 * create_array - creates initialized array
 * @size: defines the size of the array
 * @c: character to initialize array
 *
 * Return: Returns pointer to character array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
