#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;

	write(STDOUT_FILENO, "$ ", 2);
	getline(&line, &len, stdin);
	write(STDOUT_FILENO, line, len);
	free(line);
	exit(EXIT_SUCCESS);
}
