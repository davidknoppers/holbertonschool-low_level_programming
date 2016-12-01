#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - these names are getting rather verbose, eh?
 * @head: double ptr to head
 * @index: index at which to insert node
 * @n: int value of the node to be inserted
 * Return: ptr to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (*head == NULL && index != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
