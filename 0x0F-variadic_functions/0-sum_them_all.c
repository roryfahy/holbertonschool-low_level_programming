#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums its params
 * @n: number of params to be summed
 *
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbies;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(numbies, n);
	for (; i < n; i++)
		sum += va_arg(numbies, int);
	va_end(numbies);
	return (sum);
}
