#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
*
*
*/
void recur_print_int(int num_user)
{
    unsigned int num_count = num_user;

    if (num_count / 10 != 0)
    {
        recur_print_int(num_count / 10);
    }
    _putchar(num_count % 10 + '0');
}


/**
*
*
*/
int count_int(int num_user)
{
    unsigned int num_count = num_user;
    int acum;

    for (acum = 0; num_count > 0; acum++)
    {
        num_count /= 10;
    }
    return (acum);
}

/**
*
*
*
*/
int int_print(va_list args)
{
    int num_user = va_arg(args, int);
    int acum = 0;

    if (num_user == 0)
    {
        acum++;
    }
    if (num_user < 0)
    {
        num_user = -(num_user);
        _putchar('-');
        acum++;
    }
    acum += count_int(num_user);
    recur_print_int(num_user);
    return (acum);
}

