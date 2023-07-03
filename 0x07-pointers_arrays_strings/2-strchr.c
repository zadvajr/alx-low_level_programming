#include "main.h"
/**
 * _strchr - searches for a character in string
 *
 * @s: string to be searched
 * @c: character to be searched
 *
 * Return: Always returns the found character.
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return &s[i];
		}

		i++;
	}

	return (0);
}			
