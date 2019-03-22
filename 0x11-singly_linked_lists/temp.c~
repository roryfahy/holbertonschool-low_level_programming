#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - fsdfa
 * @h: pointer to a const list_t
 *
 * Return:num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	const list_t *rep;

	rep = h;
	while (rep)
	{
		num_nodes++;
		printf("[%i] ", rep->len);
		if (rep->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", rep->str);
		rep = rep->next;
	}
	return (num_nodes);
}
