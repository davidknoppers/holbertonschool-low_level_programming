#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: ptr to head
 * @index: index of node
 * Return: ptr to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}
