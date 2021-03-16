#include "holberton.h"

/**
 *
 *
 *
 *
 */
int helper_printf(const char *format, struct_form *, va_list args)
{
	int i, j;
    
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
}
