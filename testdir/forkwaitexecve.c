#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(int ac __attribute__((unused)), char **av)
{
	pid_t child_pid, my_pid, dads_pid;
	int status;
	int i;

	printf("initial pid: %u\n", getpid());
	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			my_pid = getpid();
			dads_pid = getppid();
			printf("%d: my pid is %u\nand my dads pid is %u\n", i, my_pid, dads_pid);
			execve(av[1], av, NULL);
		}
		else
		{
			printf("im dad and my pid is %u\n", getpid());
			wait(&status);
		}
	}
	return (0);
}
