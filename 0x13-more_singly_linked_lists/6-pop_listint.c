#include "lists.h"
/**
 * pop_listint - deletes the head of a list
 * and returns its data
 * @head: pointer to the head of the list
 * Return: num
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	temp = *head;
	if (temp == NULL)
		return (0);
	num = temp->n;
	*head = temp->next;
	free(temp);
	return (num);
}
