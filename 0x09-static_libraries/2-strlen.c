#include "main.h"
/**
 * _strlen - checks length of a string
 *
 * @s: single parameter
 *
 * Return: Returns the length of a string
 *
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	return (count);
}
