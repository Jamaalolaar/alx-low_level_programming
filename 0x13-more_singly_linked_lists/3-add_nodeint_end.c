#include "lists.h"
/**
 * add_nodeint_end - add a newnode at the end of the list
 * @head: a pointer that points to a pointer to the head
 * @n: element to be added
 * Return: pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *ind = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
	}
	else
		return (NULL);
	if (ind != NULL)
	{
		while (ind->next != NULL)
			ind = ind->next;
		ind->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
