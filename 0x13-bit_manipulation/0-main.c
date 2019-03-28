#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint(NULL);
	printf("%u\n", n);
	n = binary_to_uint("e11");
	printf("%u\n", n);
	n = binary_to_uint("11;");
	printf("%u\n", n);
	n = binary_to_uint("1111");
	printf("%u\n", n);
	n = binary_to_uint("");
	printf("%u\n", n);
	n = binary_to_uint("0");
	printf("%u\n", n);
	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("11111111111111111111111111111111");
	printf("%u\n", n);
	return (0);
}
