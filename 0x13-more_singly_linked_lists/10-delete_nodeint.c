#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to first node
 * @index: index
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *temp = *head;
	unsigned int i;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->next = (temp->next)->next;
	return (1);
}
