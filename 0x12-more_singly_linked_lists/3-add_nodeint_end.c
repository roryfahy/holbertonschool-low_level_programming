#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at end
 * @head: pointer to pointer to a listint_t
 * @n: data to be initialized
 *
 * Return: &new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = malloc(sizeof(*new));
	if (!temp)
		return (temp);
	temp->next = NULL;
	temp->n = n;
	if (*head)
	{
		new = *head;
		while (new->next)
			new = new->next;
		new->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
