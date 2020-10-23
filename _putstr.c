#include "holberton.h"

/**
 * _putstr - print a string and return the number of characters print.
 *
 * @str: the string.
 *
 * Return: the number of characters print.
 */

int     _putstr(char *str)
{
	int    i;

	i = 0;
	if (str == NULL)
	{
		_putstr("(null)");
	}
	else
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

/**
 * _print_string - print a string content inside a va_list.
 *
 * @mylist: va_list with the string.
 *
 * Return: the number of characters print.
 */

int	_print_string(va_list mylist)
{
	return (_putstr(va_arg(mylist, char *)));
}

