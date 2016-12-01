#include "lists.h"
/**
 * pop_listint - removes first node and makes head the next node
 * @head: pointer to pointer to head
 * Return: the integer value stored in the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*(*head)).next;
	free(temp);

	return (n);
}
