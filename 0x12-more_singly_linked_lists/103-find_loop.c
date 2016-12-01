#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - Floyd's Cycle Finding Algorithm!
 * @head: ptr to start of linked list
 * Return: ptr to loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t  *tortoise, *hare;

	if (head == NULL)
		return (NULL);
	tortoise = hare = head;
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare  = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
