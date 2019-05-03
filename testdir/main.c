#include "shell.h"

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;
	int i;

	write(STDOUT_FILENO, "$ ", 2);
	read = getline(&line, &len, stdin);
	if (read == -1)
		exit(EXIT_FAILURE);
	args = create_argv(line, read);
	for (i = 0; args[i]; i++)
		printf("token %d is: %s\n", i, args[i]);
	free(line);
	exit(EXIT_SUCCESS);
}
