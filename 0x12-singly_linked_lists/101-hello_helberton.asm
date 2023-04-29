#include <stddef.h>
#include "lists.h"
/**
*printf - hello holberton
*return: characters of printf
*/

section .data
hello: db "Hello, Holberton\n"
format: db "%s"

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

mov rdi, format
mov rsi, hello
xor rax, rax
call printf

mov rsp, rbp
pop rbp
xor eax, eax
ret
