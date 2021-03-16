#include "holberton.h"
/**
*chr_print - Function that prints a char
*@args: Argument pointer variable of type va_list
*@ptr_chr: Pointer that keep the number of character to be printed
*Return: Function type void no return
*/
void chr_print(va_list args, int *ptr_chr)
{
	char a = va_arg(args, int);

	_putchar(a);
	*(ptr_chr) = *ptr_chr + 1;
}

/**
*str_print - Function that prints a character
*@args: Argument pointer variable of type va_list
*@ptr_chr: Pointer that keep the number of character to be printed
*Return: Function type void no return
*/
void str_print(va_list args, int *ptr_chr)
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
		*(ptr_chr) = *ptr_chr + 1;
		i++;
	}
}
