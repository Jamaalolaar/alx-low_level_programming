#include "lists.h"
/**
 * add_node - adds a new head to the list
 * @head: pointer to the current head
 * @str: string element in current head
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	new_node->str = strdup(str);
	*head = new_node;
	return (*head);
}
