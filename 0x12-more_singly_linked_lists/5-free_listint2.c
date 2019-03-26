#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free the head!
 * @head: pointer to a listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp)
	{
		*head = temp;
		temp = temp->next;
		free(*head);
	}
	*head = NULL;
}
