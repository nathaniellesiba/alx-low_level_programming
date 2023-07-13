#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

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
void check(unsigned char *elf_pointer);
void magic(unsigned char *elf_pointer);


char buffer_file(char *file);
void closure(int fd);
int main(int argc, char *argv[]);
void display_error(const char *message);


=======
>>>>>>> 99291976b3ec99d48305a138a7a93b1cde9c93f9
#endif
