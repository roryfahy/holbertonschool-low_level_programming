#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: pointer to a pointer to a listint_t
 * @index: index of node starting at 0
 *
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index > 0 && head)
	{
		index--;
		head = head->next;
	}
	if (index > 0)
		return (NULL);
	return (head);
}
