#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>


/*
*struct_form - Structure of format
*@option: Format specifiers
*@func: Associated functions
*/
typedef struct{
    char *option;
    int (*func)();
}struct_form; /*Format structure*/

int _putchar(char c);
int _printf(const char *format, ...);
int chr_print(va_list args);
int str_print(va_list args);
int int_print(va_list args);

#endif /* HEADER_H */
