#include "hash_tables.h"
/**
 * hash_table_create - initialize a hash table
 * @size: size of the linked list... of linked lists
 * Return: pointer to head of linked list
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned long int i;

/*return NULL if input sucks */
	if (size < 1)
		return (NULL);
/* malloc for head of list */
	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
/* assign size and malloc for contained array */
	head->size = size;
	head->array = malloc(size * sizeof(hash_node_t *));
	if (head->array == NULL)
		return (NULL);
/*traverse list and set array nodes to NULL */
	for (i = 0; i < size; i++)
		head->array[i] = NULL;
	return (head);
}
