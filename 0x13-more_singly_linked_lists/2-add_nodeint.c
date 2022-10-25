#include "lists.h"
/**
 * add_nodeint - adds a new node to the list
 * @head: head of the node
 * @n: integer to be added
 * Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
	}
	if (*head != NULL)
		if (*head != NULL)
			newnode->next = *head;
	*head = newnode;
	return (newnode);
}
