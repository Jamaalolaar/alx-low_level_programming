#include "lists.h"
/**
 * sum_listint - gets the sum of all the data in
 * a list
 * @head: first node
 * Return: sum of all data, 0 if null
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + (sum_listint(head->next)));
}
