#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#define BUFFSIZE 1024
/**
 * read_textfile - read a text file and print to stdout
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: number of letters printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[BUFFSIZE];
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_written = _readwrite(buffer, fd);
	if (bytes_written != (ssize_t) letters)
		return (0);
	return (bytes_written);
}
/**
 * _readwrite - read and write sys calls looped
 * @buffer: temp buffer
 * @fd: fd
 * Return: number of bytes written to stdout
 */
ssize_t _readwrite(char *buffer, int fd)
{
	ssize_t bytes_read, bytes_written, total_written;

	bytes_written = total_written = 0;
	do {
		bytes_read = read(fd, buffer, BUFFSIZE);
		if (bytes_read == 0)
			return (total_written);
		if (bytes_read == -1)
			return (-1);
		bytes_written = safe_write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1)
			return (-1);
		total_written += bytes_written;
	} while (1);
	return (total_written);
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
