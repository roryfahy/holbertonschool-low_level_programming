#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at idx
 * @head: pointer to a pointer to a listint_t
 * @idx: index to make the new node
 * @n: data for new node
 *
 * Return: node at index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pre_node, *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->n = n;
	if (!head || !*head)
		return (NULL);
	pre_node = *head;
	while (idx > 1 && pre_node)
	{
		idx--;
		pre_node = pre_node->next;
	}
	if (idx > 1)
		return (NULL);
	node->next = pre_node->next;
	pre_node->next = node;
	return (node);
}
