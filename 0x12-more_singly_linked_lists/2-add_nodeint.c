#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node at beginning of a linked list
 * @head: pointer to pointer to a listint_t
 * @n: data to be initialized
 *
 * Return: &new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (new);
	new->next = NULL;
	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
