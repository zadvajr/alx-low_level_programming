#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements in a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: Returns the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t num;
	
	num = 0;
	while (h)
	{
		printf("%d\n", h->num);
		n++;
		h = h->next;
	}
	return (num);
}
