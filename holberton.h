#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*struct format_struct - Structure of format
*@option: Format specifiers
*@func: Associated functions
*
*Description: Structure
*/
typedef struct format_struct
{
	char *option;
	void (*func)();
} s_form; /*Format structure*/

int _putchar(char c);
int _printf(const char *format, ...);
int helper_printf(const char *format, s_form struct_func[], va_list args);
void chr_print(va_list args, int *ptr_chr);
void str_print(va_list args, int *ptr_chr);
void int_print(va_list args, int *ptr_chr);
void percent_print(void);

#endif /* HEADER_H */
