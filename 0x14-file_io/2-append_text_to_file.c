#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * append_text_to_file - append to end of a file
 * @filename: name of file to create
 * @text_content: null term str to write to file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		if (fd == -1)
			return (-1);
		return (1);
	}
	for (; text_content[len]; len++)
		;
	bytes_written = safe_write(fd, text_content, len);
	close(fd);
		if (bytes_written == -1)
			return (-1);
		return (1);
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
