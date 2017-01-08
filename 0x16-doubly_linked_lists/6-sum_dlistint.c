#include "lists.h"
/**
 * sum_dlistint - adds and returns all node values
 * @head: ptr to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	if (head == NULL)
		return (sum);
	temp = head;
	sum += temp->n;
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}
