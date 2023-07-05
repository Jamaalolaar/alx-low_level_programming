#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to the address of first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (cursor)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
	}
	head = NULL;
}
