#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list_recur - recurs to check for loops, print, and track length
 * @head: ptr to head
 * @previous: ptr to previous node, if any
 * Return: length of ll
 */
int print_list_recur(const listint_t *head, listint_checker *previous)
{
	listint_checker current, *temp;

	if (head->next == NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (1);
	}
	current.next = previous;
	current.address = head;
	temp = current.next;
	while (temp && temp->address != head)
		temp = temp->next;
	if (temp != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		return (0);
	}
	printf("[%p] %d\n", (void *)head, head->n);
	return (1 + print_list_recur(head->next, &current));
}
/**
 * print_listint_safe - wrapper for recursive print function
 * @head: ptr to head of linked list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		exit(98);
	return (print_list_recur(head, NULL));
}
