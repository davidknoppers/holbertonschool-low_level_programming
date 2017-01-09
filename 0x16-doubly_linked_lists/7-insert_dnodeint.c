#include "lists.h"
/**
 * insert_dnodeint_at_idx - inserts node at an index, if possible
 * @head: double ptr to head
 * @idx: index at which to insert node
 * @n: int value of the node to be inserted
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL, new->prev = NULL;
	if (idx == 0)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}
	if (i != (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	if (new->next)
		(new->next)->prev = new;
	return (new);
}
