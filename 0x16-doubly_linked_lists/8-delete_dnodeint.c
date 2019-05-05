#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: ptr to ptr to dll
 * @index: index node to remove
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *link, *temp;

	if (!head || !*head)
		return (-1);
	link = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(link);
		return (1);
	}
	while (index > 1 && link)
	{
		index--;
		link = link->next;
	}
	if (index > 1)
		return (-1);
	temp = link->next;
	link->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = link;
	free(temp);
	return (1);
}
