#include "lists.h"
/**
 * pop_listint - deletes the head of the list
 * @head: pointer to the head of the list
 * Return: n if positve; 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	if (tmp == NULL)
		return (0);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
