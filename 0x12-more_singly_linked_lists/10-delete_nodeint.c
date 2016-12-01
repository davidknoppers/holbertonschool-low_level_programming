#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: double ptr to head
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp1 = *head;
	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}
	temp2 = malloc(sizeof(listint_t));
	if (temp2 == NULL)
		return (-1);
	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
