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
	int *line;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptoarr = malloc(sizeof(int *) * height);
	if (ptoarr == NULL)
		return (NULL);
	line = malloc(height * width * sizeof(int));
	if (line == NULL)
		return (NULL);
	for (; i < height; i++)
		ptoarr[i] = line + i * width;
	for (i = 0; i < height * width; i++)
		line[i] = 0;
	return (ptoarr);
}
