#include "lists.h"
/**
 * sum_listint - calculates the sum of n numbers of elements
 * in the linked list.
 * @head: a pointer to the head of the list
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head =head->next;
	}
	return (sum);
}
