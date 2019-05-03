#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print any argument that is passed in the type it is
 * @format: constant pointer to a constant char
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *str;
	const char *rep = format;
	va_list input_args;

	va_start(input_args, format);
	while (format && *rep)
	{
		switch (*rep)
		{
		case 'c':
			printf("%c", va_arg(input_args, int));
			break;
		case 'i':
			printf("%d", va_arg(input_args, int));
			break;
		case 'f':
			printf("%f", va_arg(input_args, double));
			break;
		case 's':
			str = va_arg(input_args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			rep++;
			continue;
		}
		if (*(rep + 1))
			printf(", ");
		rep++;
	}
		va_end(input_args);
		printf("\n");
}
