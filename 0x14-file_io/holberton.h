#ifndef _H_
#define _H_

ssize_t safe_write(int fd, char *buff, size_t buff_size);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
