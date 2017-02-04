#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table!
 * @ht: ptr to head of hash table
 * no return value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *temp;
	char *sep;

	if (!ht)
		return;
	printf("{");
	for (i = j = 0; i <= ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			for (; temp != NULL; temp = temp->next, j++)
			{
				sep = ", ";
				if (j == 0)
					sep = "";
				printf("%s'%s': '%s'", sep, temp->key,
				       temp->value);
			}
		}
	}
	printf("}\n");

}
