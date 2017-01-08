#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: double ptr to head
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	temp1 = *head;
	if (index == 0)
	{
		*head = temp1->next;
		if (temp1->next)
			(temp1->next)->prev = NULL;
		free(temp1);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}
	if (i != (index - 1))
		return (-1);
	temp2 = temp1->prev;
	temp2->next = temp1->next;
	(temp2->next)->prev = temp1;
	free(temp1);
	return (1);
}
