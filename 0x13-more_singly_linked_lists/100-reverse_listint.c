#include "lists.h"

listint_t *_get2ndtolast(listint_*head)
{
	int count = 0;

	while (head->next != NULL)
	{
		count += 1;
		head = head->next;
	}
	return (head);
}
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *cursor = _get2ndtolast(temp);
	int count = 0;

	if (temp == NULL)
		return (NULL);

	for (count = 0; count < (_getlen(*head) - 1); count++)
	{
		temp->next = temp;
		temp = cursor->next;
		cursor->next = NULL;
