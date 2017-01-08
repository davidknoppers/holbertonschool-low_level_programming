#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds node to beginning of list
 * @head: address of previous "first" element
 * @n: int to put into new node
 * Return: address to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
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
	new->prev = temp;
	return (temp->next);
}
