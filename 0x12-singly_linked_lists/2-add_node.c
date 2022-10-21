#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - Adds a new node to the beginning of the list
 * @head: A pointer to the head of the list.
 * @str: string to be added to the list
 * Return: address of the new element for function success, NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str1;
	list_t *strout;
	int len = 0;

	strout = malloc(sizeof(list_t));
	if (strout == NULL)
		return (NULL);

	str1 = strdup(str);
	if (str1 == NULL)
	{
		free(strout);
		return (NULL);
	}

	while (str[len])
		len++;
	strout->str = str1;
	strout->len = len;
	strout->next = *head;

	*head = strout;

	return (strout);
}

