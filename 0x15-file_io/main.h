#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* a function that reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);
/* a function that creates a file.*/
int create_file(const char *filename, char *text_content);
/* a function that appends text at the end of a file.*/

int append_text_to_file(const char *filename, char *text_content);
int cp(const char *file_from, const char *file_to);
int _putchar(char c);

#endif


