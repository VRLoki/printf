#include "holberton.h"

/**
 * _putstr - print a string and return the number of characters print.
 *
 * @str: the string.
 *
 * Return: the number of characters print.
 */

int     _putstr(char *str, char *buff, int *bufflen)
{
	int    i;

	i = 0;
	if (str == NULL)
	{
		_putstr("(null)", buff, bufflen);
	}
	else
	{
		while (str[i])
		{
			_putchar(str[i], buff, bufflen);
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

int	_print_string(va_list mylist, char *buff, int *bufflen)
{
	return (_putstr(va_arg(mylist, char *), buff, bufflen));
}
