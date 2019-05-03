#include "lists.h"

/**
 * print_dlistint - print all elements of a linked list
 * @h: pointer to a node
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
