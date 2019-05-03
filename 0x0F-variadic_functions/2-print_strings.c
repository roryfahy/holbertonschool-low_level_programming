#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings followed by a new line
 * @separator: pointer to a constant char
 * @n: number of args passed to print_numbers
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringies;
	char *ptr;

	va_start(stringies, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(stringies, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(stringies);
}
