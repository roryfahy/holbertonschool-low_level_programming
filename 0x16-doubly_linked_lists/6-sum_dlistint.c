#include "lists.h"

/**
 * sum_dlistint - sum a dll
 * @head: pointer to dll
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
