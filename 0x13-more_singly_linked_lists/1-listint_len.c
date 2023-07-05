#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of list
 * Return: length of list, 0 if NULL
 */
size_t listint_len(const listint_t *h)
{
	if (h != NULL)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
