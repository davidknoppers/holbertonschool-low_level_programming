#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: double ptr to head
 * Return: ptr to new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next_n;

	current = *head;
	*head = NULL;
	while (current)
	{
		next_n = current->next;
		current->next = *head;
		*head = current;
		current = next_n;
	}
	return (current);
}
