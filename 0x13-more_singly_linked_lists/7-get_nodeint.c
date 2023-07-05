#include "lists.h"
/**
 * get_nodeint_at_index - finds a node of a certain
 * index in a lined list
 * @head: first node
 * @index: index
 * Return: required node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (n <= index)
	{
		if (temp == NULL)
			return (NULL);
		if (n == index)
			return (temp);
		temp = temp->next;
	}
	return (temp);
}
