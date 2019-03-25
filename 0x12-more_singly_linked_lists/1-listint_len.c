#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return numb of nodes
 * @h: pointer to a listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
