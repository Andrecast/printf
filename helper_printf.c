#include "holberton.h"

/**
 *helper_printf - Function that shows the lenght of format
 *@format: string that contains all the message
 *@struct_func: Structure of the functions that contains the specifiers
 *@args: contains the variadic function arguments
 *Return: return the total of characters to be printed
 */
int helper_printf(const char *format, s_form struct_func[], va_list args)
{
	int i = 0, j;
	int *ptr;
	int acum_total = 0;

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	ptr = &acum_total;
	while (format[i] != '\0' && format)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			acum_total++;
			i++;
		}
		if (format[i] == '\0')
			break;
		i++;
		if (format[i] == '%')
		{
			_putchar(format[i]);
			acum_total++;
		}
		j = 0;
		while (struct_func[j].option != NULL)
		{
			if (format[i] == struct_func[j].option[0])
			{
				struct_func[j].func(args, ptr);
			}
			j++;
		}
		i++;
	}
	return (*ptr);
}
