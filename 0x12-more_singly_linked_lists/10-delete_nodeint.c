#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to a pointer to a listint_t
 * @index: node to delete
 *
 * Return: 1 on success -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre_node, *temp;

	if (!head || !*head)
		return (-1);
	pre_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(pre_node);
		return (1);
	}
	while (index > 1 && pre_node)
	{
		index--;
		pre_node = pre_node->next;
	}
	if (index > 1)
		return (-1);
	temp = pre_node->next;
	pre_node->next = temp->next;
	free(temp);
	return (1);
}
