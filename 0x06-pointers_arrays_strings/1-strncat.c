#include "main.h"
/**
 * _strncat - concatenates n bytes of strings
 *
 * Return: Always Returns character array
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char tmp[100];

	i = 0;
	j = 0;

	while (src[i] != '\0')
	{
		tmp[j] = src[i];
		i++;
		j++;
	}

	i = 0;

	while ((tmp[i] != '\0') && (i < n))
	{
		dest[j] = tmp[i];
		i++;
		j++;
	}

	dest[j] = '\0';
	return (dest);

}
