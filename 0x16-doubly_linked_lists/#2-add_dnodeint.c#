#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning
 * @head: pointer to pointer to node
 * @n: constant int element
 * Return: address of new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	if (*head != NULL)
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (*head);
}
