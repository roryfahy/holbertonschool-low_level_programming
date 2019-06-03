#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a ht
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *last_key, *node;

	last_key = node = NULL;
	if (ht != NULL && ht->array != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				last_key = ht->array[i];
				for (; last_key->next != NULL; last_key = last_key->next)
					;
			}
		}
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				for (; node->next != NULL; node = node->next)
					printf("'%s': '%s'", node->key, node->value);
				printf("'%s': '%s'", node->key, node->value);
				if (node != last_key)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
