#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * argstostr - concatenate all the arguments of your program
 * @ac: number of args
 * @av: array of pointers to args
 *
 * Return: pointer to a char string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tot_len = 0;
	char *newArr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			tot_len++;
	newArr = malloc(sizeof(char) * tot_len + ac + 1);
	if (newArr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			newArr[k] = av[i][j];
		newArr[k] = '\n';
		k++;
	}
	return (newArr);
}
