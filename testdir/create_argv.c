#include "shell.h"
/**
 * create_argv - copy line into separate string, break copy into tokens, store
 * tokens in arg array which will be null terminated
 * @str: string to copy from getline in main
 * @size: lenght of string passed in(dont forget to add one for null byte)
 * @
 *
 * Return: a double pointer to an array of stings that store our broken down
 */
char **create_argv(char *str, ssize_t size)
{
	char **args, *cpy, *cpy2, *token, *delim;
	int numPtrs, i;

	delim = " \t\n\r";
	cpy = malloc(size);
	if (!cpy)
		return (NULL);
	cpy2 = malloc(size);
	if (!cpy2)
	{
		free(cpy);
		return (NULL);
	}
	_strcpy(cpy, str);
	_strcpy(cpy2, str);
	token = strtok(cpy2, delim);
	for (numPtrs = 1; token; numPtrs++)
		token = strtok(NULL, delim);
	args = malloc(sizeof(char *) * numPtrs);
	if (!args)
	{
		free(cpy);
		free(cpy2);
		return (NULL);
	}
	printf("test1, cpy is %s\n", cpy);
	token = strtok(cpy, delim);
	for (i = 0; token; i++)
	{
		args[i] = token;
		printf("test2%d: args[%d] is %s\ntoken is %s\n\n", i, i, args[i], token);
		token = strtok(NULL, delim);
	}
	args[i] = NULL;
	printf("test3 args is %s\n\n", args[i]);
	return (args);
}
