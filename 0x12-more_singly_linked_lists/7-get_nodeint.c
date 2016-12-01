#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at a given index
 * @head: ptr to head
 * @index: index of node
 * Return: ptr to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, j;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp = head;
	j = index;
	for (i = 0; i < j - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
