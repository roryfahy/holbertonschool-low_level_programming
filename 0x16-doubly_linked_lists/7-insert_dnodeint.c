#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at idx
 * @h: pointer to pointer to dll
 * @idx: index to insert at
 * @n: data for new node
 * Return: pointer to new node or null if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *l, *i;

	i = malloc(sizeof(*i));
	if (i == NULL)
		return (NULL);
	i->n = n, i->next = NULL,	i->prev = NULL;
	if (h == NULL)
	{
		free(i);
		return (NULL);
	}
	if (*h == NULL)
	{
		if (idx != 0)
		{
			free(i);
			return (NULL);
		}
		*h = i;
		return (i);
	}
	l = *h;
	if (idx == 0)
	{
		*h = i, i->next = l, l->prev = *h;
		return (i);
	}
	for (; idx > 1 && l != NULL; idx--)
		l = l->next;
	if (idx > 1)
	{
		free(i);
		return (NULL);
	}
	if (l->next == NULL)
		l->next = i, i->prev = l;
	else
		i->prev = l, i->next = l->next, l->next = i, i->next->prev = i;
	return (i);
}
