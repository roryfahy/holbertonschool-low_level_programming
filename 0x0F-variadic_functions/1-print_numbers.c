#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 * @separator: pointer to a constant char
 * @n: number of args passed to print_numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbs;

	if (separator == NULL)
		separator = "";
	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
			va_end(numbs);
	}
}
