#include "holberton.h"

/**
*_printf - Function that prints
*@format: string that contains all the message
*Return: the number of characters printed
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
