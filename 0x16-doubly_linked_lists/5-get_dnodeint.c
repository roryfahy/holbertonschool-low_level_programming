#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node
 * @head: pointer to dll
 * @index: index of node
 * Return: node at index or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
