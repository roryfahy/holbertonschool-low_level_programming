#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptrA, *ptrB;

	if (ht != NULL)
	{
		ptrA = ptrB = NULL;
		for (; i < ht->size; i++)
			if (ht->array[i] != NULL)
			{
				ptrA = ht->array[i];
				while (ptrA != NULL)
				{
					ptrB = ptrA->next;
					free(ptrA->key), free(ptrA->value), free(ptrA);
					ptrA = ptrB;
				}
			}
		free(ht->array);
		free(ht);
	}
}
