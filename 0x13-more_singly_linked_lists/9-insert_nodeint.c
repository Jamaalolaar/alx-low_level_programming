#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * in a list
 * @head: pointer to the first node
 * @idx: index (starts from 0)
 * @n: data in new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
