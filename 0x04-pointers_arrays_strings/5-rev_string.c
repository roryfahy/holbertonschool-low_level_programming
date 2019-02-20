#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: pointer to char
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *l = s;
	char *r = s;
	int n;

	while (*r)
		r++;
	r--;
	while (l <= r)
	{
		n = *r;
		*r = *l;
		*l = n;
		l++;
		r--;
	}
}
