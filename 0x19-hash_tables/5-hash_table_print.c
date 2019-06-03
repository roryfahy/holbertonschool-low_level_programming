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
	if (ht != NULL) /* what if ht->array == NULL? */
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				last_key = ht->array[i];
				for (; last_key->next != NULL; last_key = last_key->next)
					printf("last_key is: %p\n", (void *) last_key);
				printf("last_key is: %p\n", (void *) last_key);
			}
		}
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				printf("node is: %p", (void *) node);
				for (; node != NULL; node = node->next) /* what if key or value are null? */
				{
					printf("'%s': '%s'", node->key, node->value);
					printf("node is: %p", (void *) node);
				}
				printf("node is: %p", (void *) node);
				if (node != last_key)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
