#include "main.h"
/**
 * set_string - sets string through a double pointer
 *
 * @s: double pointer parameter
 * @to: string to be set 
 *
 *
 */
void set_string(char **s, char *to)
{
	**s = &to;
}
