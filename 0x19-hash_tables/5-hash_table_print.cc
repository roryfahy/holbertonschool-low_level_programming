#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a ht
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int z, i, k, j;
	hash_node_t *node;
	/* char *keys[ht->size], *values[ht->size]; */

	/* for (z = 0; z < ht->size; z++); */
	/* { */
	/* } */
	j = k = 0;
	if (ht != NULL) /* what if ht->array == NULL? */
	{
		for (i = 0; i < ht->size; i++, j++)
		{
			node = ht->array[i];
			for (; node != NULL; j++, node = node->next)
		}
		putchar('{');
		for (; k < j; k++)
		{
			printf("%s: %s", );
			if (k < j - 1)
				printf(', ');
		}
		printf('}\n');
	}
}
