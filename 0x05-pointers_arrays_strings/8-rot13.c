#include <stdio.h>
#include "holberton.h"
/**
 * rot13 - encode a string
 * @ptr: points to a string
 *
 * Return: address of argument string
 */
char *rot13(char *ptr)
{
	char reg[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!ptr)
		return (NULL);
	for (; ptr[i]; i++)
		for (j = 0; reg[j]; j++)
			if (ptr[i] == reg[j])
				ptr[i] = rot[j];
	return (ptr);
}
