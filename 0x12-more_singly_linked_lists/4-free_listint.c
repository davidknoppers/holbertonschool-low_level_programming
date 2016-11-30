#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list, backwards
 * @head: pointer to start of list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
