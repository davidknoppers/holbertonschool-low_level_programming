#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * add_node_end - adds node to beginning of list
 * @head: address of previous "first" element
 * @str: str to dup into new node
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	temp = temp->next;
	return (temp);
}
