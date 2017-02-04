#include "hash_tables.h"
/**
 * key_index - finds a index for a hashed key using modulo
 * @key: key to hash with djb2
 * @size: size of hash table, which will determine index
 * Return: the proper index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;
/* get the hash for the key */
	result = hash_djb2(key);
/* modulo the hash by the table size to ensure it will fit in the table */
	result %= size;

	return (result);
}
