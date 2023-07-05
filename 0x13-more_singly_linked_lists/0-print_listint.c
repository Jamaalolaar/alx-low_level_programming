#include "lists.h"
/**
 * print_listint - prints the list and return
 * the number of nodes
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
	/**
	 *const listint_t *temp = h;

	 *if (temp != NULL)
	 *{
	 *	printf("%d\n", temp->next);
	 *	return (1 + print_listint(temp->next));
	 *}
	 *return (0);
*/
}
