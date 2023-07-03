#include "lists.h"
#include <stdio.h>
/**
 * size_t print_list(const list_t *h) - prints all the elements in a
 * linked list.
 * @h: pointer to first node
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while ( h!= NULL)
	{
		if ( h -> str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h -> next;
		counter++;
	}
	return (counter);
}
