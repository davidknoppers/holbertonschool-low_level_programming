#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds node to beginning of list
 * @head: address of previous "first" element
 * @n: integer value to be copied into node
 * Return: address to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;

	return (new);
}
