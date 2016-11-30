#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds node to beginning of list
 * @head: address of previous "first" element
 * @n: int to dup into new node
 * Return: address to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
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
	return (temp->next);
}
