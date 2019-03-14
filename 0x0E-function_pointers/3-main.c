#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - performs a simple opperation and prints the result followed by a '\n'
 * @argc: number of arguments passed to main
 * @argv: array of pointers to chars
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int A, B;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	A = atoi(argv[1]);
	B = atoi(argv[3]);
	result = get_op_func(argv[2]);
	if (result == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(A, B));
	return (0);
}
