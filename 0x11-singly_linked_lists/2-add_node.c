#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add new node at beginning of a list_t list
 * @head: pointer to a pointer to a list_t
 * @str: pointer to a constant char
 *
 * Return: address of new element or NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *oldH;

	oldH = *head;
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	(*head)->str = strdup(str);
	(*head)->next = oldH;
	(*head)->len = i;
	return (*head);
}
