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
void elf_magic(unsigned char *elf_file);
void elf_elf(unsigned char *elf_file);
void elf_elass(unsigned char *elf_file);
void elf_data(unsigned char *elf_file);
void elf_version(unsigned char *elf_file);
void elf_osabi(unsigned char *elf_file);
void lef_abi(unsigned char *elf_file);
void elf_type(unsigned int *file_type);
void elf_entry(unsigned long int elf_file, unsigned char *elf_file);
void elf_closure (int elf);


#endif
