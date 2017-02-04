#include "hash_tables.h"
/**
 * hash_table_set - sets the hash table
 * @ht: pointer to hash table struct
 * @key: key to be inserted into table
 * @value: value to be stored at key index
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *new;

/*if there's no table or key we can't do much here*/
	if (!ht || !key)
		return (0);
/*get size of table and use key_index to get the key index*/
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
/*malloc for new node*/
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
/*assign values for new node, return 1 for success */
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
