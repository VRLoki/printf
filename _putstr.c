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
 * @pp : structure with flags informations
 *
 * Return: 1 (Always)
 */

int	_print_string(va_list mylist, char *buff, int *bufflen, param *pp)
{
	int i, len;
	char *str;

	str = va_arg(mylist, char *);
	len = _strlen(str);

	if (pp->minusf == 0)
	{
		for (i = 0; i < pp->widthm - len; i++)
			_putchar(' ', buff, bufflen);
	}
	_putstr(str, buff, bufflen);
	if (pp->minusf == 1)
	{
		for (i = 0; i < pp->widthm - len; i++)
			_putchar(' ', buff, bufflen);
	}
	return (1);
}




/**
 * _print_string_r - print a string content inside a va_list in reverse
 *
 * @mylist: va_list with the string.
 * @buff : buffer
 * @bufflen : size of the buffer
 * @pp : structure with flags informations
 *
 * Return: the number of characters print.
 */

int	_print_string_r(va_list mylist, char *buff, int *bufflen, param *pp)
{
	if (pp->lmod == 2)
		return (-1);
	return (_putstr(_strrev(va_arg(mylist, char *)), buff, bufflen));
}
