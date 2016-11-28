#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds node to beginning of list
 * @head: address of previous "first" element
 * @str: str to dup into new node
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
