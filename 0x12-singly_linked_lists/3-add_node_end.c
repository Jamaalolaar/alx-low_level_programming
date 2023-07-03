#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of
 * a list
 * @head: pointer to head node
 * @str: string at the end of node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *current_node;
	size_t n;

	new_tail = malloc(sizeof(list_t));
	current_node = malloc(sizeof(list_t));
	current_node = *head;

	if (new_tail == NULL)
		return (NULL);
	new_tail->str == strdup(str);
	new_tail->next == NULL;
	for (n = 0; str[n]; n++)
		;
	if (current_node == NULL)
	{
		new_tail = *head;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_tail;
	}
	return (*head);
}
