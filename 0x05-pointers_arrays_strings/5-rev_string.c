#include "main.h"
/**
 * rev_string - reverses string passed as parameter
 *
 * @s: formal parameter
 *
 * Return: Always void
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	int count;
	char str[1000];

	i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	j = count -1;

	while (s[j] != '\0')
	{
		str[j] = s[j]
		j--;
	}
}
