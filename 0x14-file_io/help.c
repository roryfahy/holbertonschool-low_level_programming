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
