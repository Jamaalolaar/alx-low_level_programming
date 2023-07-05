#include "lists.h"
/**
 * add_nodeint - adds a new node at the
 * beginning of a list
 * @head: pointer to the address of first node
 * @n: data contained in new node
 * Return: address on new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->next = *head;
		new_node->n = n;
	}
	else
		return (NULL);
	if (head != NULL)
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (*head);
}
