#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table array to add to
 * @key: key to add in
 * @value: value associated with that key
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node_ptr, *tmp_node = NULL;

	node_ptr = calloc(1, sizeof(hash_node_t));
	if (node_ptr == NULL)
		return (0);
	node_ptr->key = strdup(key);
	if (node_ptr->key == NULL || node_ptr->key[0] == '\0')
	{
		free(node_ptr);
		return (0);
	}
	node_ptr->value = strdup(value);
	if (node_ptr->value == NULL)
	{
		free(node_ptr->key);
		free(node_ptr);
		return (0);
	}
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node_ptr;
		return (1);
	}
	tmp_node = ht->array[index];
	for (; tmp_node != NULL; tmp_node = tmp_node->next)
		if (strcmp(key, tmp_node->key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (tmp_node->value == NULL)
				return (0);
			return (1);
		}
	node_ptr->next = ht->array[index];
	ht->array[index] = node_ptr;
	return (1);
}
