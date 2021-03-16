#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
/**
*
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
    
    int i, j;
    va_list args;
    va_start(args, format);

    i = 0;
    while(format[i] != '\0' && format)
    {
        if (format[i] != '%' && format[i] != '\0')
        {
            _putchar(format[i]);
            i++;
        }
        if (format[i] == '\0')
            break;
        i++;
        if (format[i] == '%')
        {
            _putchar(format[i]);
        }
        j = 0;
        while(struct_func[j].option != NULL)
        {
            if (format[i] == struct_func[j].option[0])
            {
                struct_func[j].func(args);
            }
            j++;
        }
        i++;
    }
    va_end(args);
    return (i);
}
