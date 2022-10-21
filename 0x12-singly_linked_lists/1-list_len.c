#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets the number of elements in a list
 * @h: the list
 * Return: number of elements in list h
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
