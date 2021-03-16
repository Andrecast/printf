#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
*_printf - 
*
*
*/
int _printf(const char *format, ...)
{
    struct_form struct_func[] = {
        {"c", chr_print},
        {"s", str_print},
        {"d", int_print},
        {"i", int_print},
        {NULL, NULL}
    };
    
    va_list args;
    va_start(args, format);
    int helper;

    helper = helper_printf(format, struct_func, args);
    va_end(args);
    return (helper);
}
