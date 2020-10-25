#include "holberton.h"

/**
 * _putstr - add string to buffer and return the number of characters print.
 *
 * @str: the string.
 * @buff : buffer
 * @bufflen : size of the buffer
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
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of characters print.
 */

int	_print_string(va_list mylist, char *buff, int *bufflen)
{
	return (_putstr(va_arg(mylist, char *), buff, bufflen));
}




/**
 * _print_string_r - print a string content inside a va_list in reverse
 *
 * @mylist: va_list with the string.
 * @buff : buffer
 * @bufflen : size of the buffer
 *
 * Return: the number of characters print.
 */

int	_print_string_r(va_list mylist, char *buff, int *bufflen)
{
	return (_putstr(_strrev(va_arg(mylist, char *)), buff, bufflen));
}
