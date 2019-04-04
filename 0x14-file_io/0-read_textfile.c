#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - read a text file and print to stdout
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: number of letters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	b_read = read(fd, buffer, letters);
	if (b_read == -1)
		return (0);
	write(STDOUT_FILENO, buffer, b_read);
	close(fd);
	return (b_read);
}
