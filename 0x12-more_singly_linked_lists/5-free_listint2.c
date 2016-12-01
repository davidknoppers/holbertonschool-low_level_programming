#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to null
 * @head: pointer to start of list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (!head || !(*head))
		return;
	temp1 = *head;
	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	*head = NULL;
}
