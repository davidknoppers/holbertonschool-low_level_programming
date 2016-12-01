#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: double ptr to head
 * Return: ptr to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	if (!(*head))
		return (*head);
	current = *head;
	while (current->next)
	{
		previous = current->next;
		current->next = previous->next;
		previous->next = *head;
		*head = previous;
	}
	return (*head);
}
