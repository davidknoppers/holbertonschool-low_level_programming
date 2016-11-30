#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to null
 * @head: pointer to start of list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*(*head)).next;
		free(temp);
	}
}
