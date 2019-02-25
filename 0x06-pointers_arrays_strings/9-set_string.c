#include <stdio.h>
#include "holberton.h"
#define NULL ((void *)0)
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
