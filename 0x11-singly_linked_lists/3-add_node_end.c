#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - add new node at the end of a list_t list
 * @head: pointer to a pointer to a list_t
 * @str: pointer to a constant char
 *
 * Return: address of new element or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *NewEle, *temp;

	if ((*head) == NULL)
		*head = NewEle = malloc(sizeof(list_t));
	else
	{
		NewEle = malloc(sizeof(*temp));
		if (NewEle == NULL)
			return (NULL);
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = NewEle;
	}
	for (i = 0; str[i]; i++)
		;
	NewEle->str = strdup(str);
	NewEle->next = NULL;
	NewEle->len = i;
	return (NewEle);
}
