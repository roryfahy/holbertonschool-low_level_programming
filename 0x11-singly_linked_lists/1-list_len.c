#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - return elements in linked list_t list
 * @h: pointer to a const list_t
 *
 * Return:num of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;
	const list_t *rep;

	rep = h;
	while (rep)
	{
		num_nodes++;
		rep = rep->next;
	}
	return (num_nodes);
}
