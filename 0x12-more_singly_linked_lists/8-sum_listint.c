#include "lists.h"
/**
 * sum_listint - adds and returns all node values
 * @head: ptr to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	if (head == NULL)
		return (sum);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (sum);
	temp = head;
	sum += temp->n;
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	free(temp);
	return (sum);
}
