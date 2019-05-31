#include "hash_tables.h"

/**
 * hash_table_get - retreive val associated with key
 * @ht: hash table
 * @key: key to retrive value of
 * Return: the val associated with key or NULL if no key present
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
