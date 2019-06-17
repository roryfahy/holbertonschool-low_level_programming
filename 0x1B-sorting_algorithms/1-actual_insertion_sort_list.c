#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list via insertion sort
 * @list: double pointer to a dll
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *fp, *cfp, *bp;

	if (list == NULL || *list == NULL)
		return;
	for (cfp = fp = (*list)->next; cfp != NULL; cfp = fp = cfp->next)
	{
		for (bp = fp->prev; bp != NULL && fp->n < bp->n; bp = bp->prev)
			;
		if (bp == fp->prev)
			continue;
		cfp = fp->prev;
		if (fp->next != NULL)
			fp->next->prev = fp->prev;
		fp->prev->next = fp->next;
		if (bp != NULL)
		{
			fp->next = bp->next;
			fp->prev = bp;
			bp->next = fp;
			fp->next->prev = fp;
		}
		else
		{
			fp->prev = NULL;
			fp->next = *list;
			(*list)->prev = fp;
			*list = fp;
		}
		print_list(*list);
	}
			
}
