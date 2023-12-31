#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* a function that reads a text file and prints it */
ssize_t read_textfile(const char *filename, size_t letters);
/* a function that creates a file.*/
int create_file(const char *filename, char *text_content);
/* a function that appends text at the end of a file.*/

int append_text_to_file(const char *filename, char *text_content);
int copy_file(const char *src_filename, const char *dest_filename);
int _putchar(char c);

#endif


