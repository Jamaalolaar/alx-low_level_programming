#include "lists.h"
#include <stdio.h>
/**
 * list_len - counts the elements in a linked list.
 * @h: list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
