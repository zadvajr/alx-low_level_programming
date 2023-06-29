#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: Always returns character array
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char tmp[100];

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		tmp[j] = dest[i];
		i++;
		j++;
	}

	i = 0;

	while (src[i] != '\0')
	{
		tmp[j] = src[i];
		i++;
		j++;
	}

	tmp[j] = '\0';

	i = 0;
	j = 0;

	while (tmp[i] != '\0')
	{
		dest[j] = tmp[i];
		i++;
		j++;
	}

	return (dest);
}
