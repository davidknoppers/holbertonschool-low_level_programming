#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 * @ht: ptr to head of table
 * @key: key for value
 * Return: value at key index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;
	int compare;
/* make sure there's a hash table here */
	if (!ht || !key)
		return (NULL);
/*use key_index to get us the index for the value*/
	index = key_index((const unsigned char *)key, ht->size);
/*start at head of linked list in array, unless that fails */
	temp = ht->array[index];
	if (!temp)
		return (NULL);
/*there may be a collision so you want to traverse the LL within the array*/
	while (temp)
	{
		compare = strcmp(key, temp->key);
		if (compare == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
