#include "holberton.h"
/**
 * reverse_array - function that reverses the content of integer array
 * @a: points to an integer
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; n > i; n--, i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
