#include <stdio.h>
#include "lists.h"

void message(void)__attribute__((constructor));

/**
 * print_message - prints the sentence
 */

void print_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
