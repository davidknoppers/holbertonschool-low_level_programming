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
	dlistint_t *temp;
	unsigned int i;

	if (!(head) || !(*head))
		return (-1);
	temp = *head;
	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	if (i == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		if (temp == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		if (temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
