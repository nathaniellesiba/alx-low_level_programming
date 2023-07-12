#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
<<<<<<< HEAD
char buffer_file (char *file);
void closure (int fd);
int main(int argc, char* argv[]);
void display_error(const char* message);
void display_elf_header(const char* filename);

=======
char buffer_file(char *file);
void closure(int fd);
int main(int argc, char *argv[]);
void display_error(const char *message);
>>>>>>> 53697fdfe27793ab2907f0c1cc13d7c7f5a2d5a8

#endif
