#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#define BUFFSIZE 1024
/**
 * main - copy content of one file to another Usage: cp file_from file_to
 * @argc: number of args
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int from, to, clos;
	char buffer[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_rw(buffer, from, to, argv[1], argv[2]);
	clos = close(to);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	clos = close(from);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
/**
 * _rw - read and write sys calls looped
 * @buffer: temp buffer
 * @from: fd
 * @to: fd
 * @src: file to read from
 * @dest: file to write to
 * Return: void
 */
void _rw(char *buffer, int from, int to, char *src, char *dest)
{
	ssize_t bytes_read, bytes_written;

	do {
		bytes_read = read(from, buffer, BUFFSIZE);
		if (bytes_read == 0)
			break;
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		bytes_written = safe_write(to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	} while (1);

}
/**
 * safe_write - helper function to loop a write and handle errors
 * @fd: file descriptor
 * @buff: buffer to write from
 * @buff_size: size of the bufffer written from
 * Return: number of bytes written
 */
ssize_t safe_write(int fd, char *buff, size_t buff_size)
{
	ssize_t prev_bytes;
	size_t total_written = 0;

	if (buff == NULL || fd < 0)
		return (-1);
	do {
		prev_bytes = write(fd, buff + total_written, buff_size - total_written);
		total_written += prev_bytes;
	} while (total_written != buff_size && prev_bytes > 1);
	if (prev_bytes == -1)
		return (-1);
	return (total_written);
}
