#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - frees a 2d grid previously created by alloc_grid
 * @grid: pointer to 2d array
 * @height: height of 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free(*grid);
	free(grid);
}
