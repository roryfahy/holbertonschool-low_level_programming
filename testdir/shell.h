#ifndef _shell_
#define _shell_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

char **create_argv(char *str, ssize_t size);
char *_strcpy(char *dest, const char *src);


#endif
