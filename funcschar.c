#include "holberton.h"
#include <unistd.h>
/**
*chr_print - Function that prints a char
*@args: Argument pointer variable of type va_list
*Return: a
*/
int chr_print(va_list args)
{
	int a = va_arg(args, int);

	_putchar(a);
	return (1);
}

/**
*str_print - Function that prints a character
*@args: Argument pointer variable of type va_list
*Return: i
*/
int str_print(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
