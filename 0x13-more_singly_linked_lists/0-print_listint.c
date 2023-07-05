#include "lists.h"
/**
 * print_listint - prints the list and return
 * the number of nodes
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;

	if (temp != NULL)
	{
		printf("%d\n", temp->n);
		return (1 + print_listint(temp->next));
	}
	return (0);
}
