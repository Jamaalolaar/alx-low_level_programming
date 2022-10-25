#include "lists.h"

/**
 * print_listint - prints all the elements in a linked list
 * @h: starting point of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ind = h;
	size_t counter = 0;

	for (ind != NULL; counter++;)
	{
		printf("%d\n", ind->n);
		ind = ind->next;
	}
	return (counter);
}

