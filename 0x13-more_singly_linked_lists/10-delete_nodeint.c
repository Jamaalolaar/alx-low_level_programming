#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node in a linked list
 * at a particular index
 * @head: a pointer to the head of the list
 * @index: index at which a node will be deleted
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *tmp, *ptr = *head;
	unsigned int i;

	if (ptr == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
	return (1);
}
