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
	unsigned long int index;
	hash_node_t *new;

/*if there's no table or key we can't do much here*/
	if (!ht || !key || !value)
		return (0);
/*get size of table and use key_index to get the key index*/
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	if (new && strcmp(new->key, (char *)key))
	{
		new->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->next = ht->array[index];
	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[index] = new;
	return (1);
}
