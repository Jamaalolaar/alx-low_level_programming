#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - counts and returns the number of elements in a linked list
 * @h: head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ind = h;
	size_t counter = 0;

	while (ind != NULL)
	{
		counter++;
		ind = ind->next;
	}
	return (counter);
}
