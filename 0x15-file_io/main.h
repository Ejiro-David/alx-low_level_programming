
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef HEADER_FILE
#define HEADER_FILE
#define BUFFER_SIZE 1024

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(char *file_from, char *file_to);

#endif
