#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	write(STDOUT_FILENO, "$ ", 2);
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		write(STDOUT_FILENO, line, read);
		write(STDOUT_FILENO, "$ ", 2);
	}
	free(line);
	exit(EXIT_SUCCESS);
}
