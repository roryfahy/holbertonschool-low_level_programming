#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2-D array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2d array of ints
 */
int **alloc_grid(int width, int height)
{
	int **ptoarr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptoarr = malloc(sizeof(int *) * height);
	if (ptoarr == NULL)
		return (NULL);
	for (i = 0; height > 0; height--, i++)
	{
		ptoarr[i] = malloc(width * sizeof(int));
		if (ptoarr[i] == NULL)
		{
			for (; i > 0; i--)
				free(ptoarr[i-1]);
			free(ptoarr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptoarr[i][j] = 0;
	}
	return (ptoarr);
}
