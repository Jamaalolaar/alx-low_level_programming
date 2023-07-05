#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the list
 * @head: first node
 * @n: data contained in new node to be added
 * Return: address of last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *temp;

	temp = *head;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail != NULL)
	{
		new_tail->n = n;
		new_tail->next = NULL;
	}
	else
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
